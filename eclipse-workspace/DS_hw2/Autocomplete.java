

import java.util.Arrays;
import java.util.Comparator;

public class Autocomplete{
    
    private Term[] terms;
    
    //Initialize the data structure from the given array of terms
    public Autocomplete(Term[] terms) {
        
        this.terms = terms; 
        
        
    }
    
    // Returns all terms that start with the given prefix, in descending order of weight.
    public Term[] allMatches(String prefix) {
        
        Term query = new Term(prefix,0);
        
        int firstIndex = BinarySearchDeluxe.firstIndexOf(terms, query, Term.byPrefixOrder(query.getQuery().length()));
        int lastIndex  = BinarySearchDeluxe.lastIndexOf(terms, query, Term.byPrefixOrder(query.getQuery().length()));
        
        
        if(firstIndex == -1) {
            
            Term[] Suggestions = new Term[1];
            Suggestions[0] = new Term("No Suggestions", 0);
            
            return Suggestions;
        }
        
        else {
            Term[] Suggestions = new Term[(lastIndex - firstIndex) + 1];
            
            for(int i = 0; i < lastIndex; i++) {
                Suggestions[i] = terms[firstIndex];
                firstIndex++;
            }
            Arrays.sort(Suggestions, Term.byReverseWeightOrder());
            
            return Suggestions;
           
        }
    }
        //=======================================================
        // returns the number of terms that start with the given prefix
        
        public int numberOfMatches(String prefix)
        {   
            Term query = new Term(prefix, 0);
            
            int firstIndex = BinarySearchDeluxe.firstIndexOf(terms, query, Term.byPrefixOrder(query.getQuery().length()));
            int lastIndex  = BinarySearchDeluxe.lastIndexOf(terms, query, Term.byPrefixOrder(query.getQuery().length()));
            
            if (firstIndex == -1)
            {
                return 0;
            }
            else
            {
                return lastIndex - firstIndex;
            }
        }
        
        //==================================
         
    
        public static void main(String[] args) {

            // read in the terms from a file
            String filename = args[0];
            In in = new In(filename);
            int N = in.readInt();
            Term[] terms = new Term[N];
            for (int i = 0; i < N; i++) {
                long weight = in.readLong();           // read the next weight
                in.readChar();                         // scan past the tab
                String query = in.readLine();          // read the next query
                terms[i] = new Term(query, weight);    // construct the term
            }

            // read in queries from standard input and print out the top k matching terms
            int k = Integer.parseInt(args[1]);
            Autocomplete autocomplete = new Autocomplete(terms);
            while (StdIn.hasNextLine()) {
                String prefix = StdIn.readLine();
                Term[] results = autocomplete.allMatches(prefix);
                for (int i = 0; i < Math.min(k, results.length); i++)
                    StdOut.println(results[i]);
            }
        }
    
}