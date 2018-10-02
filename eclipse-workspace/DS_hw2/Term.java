
import java.util.Arrays;
import java.util.Comparator;

public class Term implements Comparable<Term> {
    
    private static long weight;
    private static String query;
    
    public Term( String query, long weight) {
        

        if (weight < 0)
        {
            throw new java.lang.IllegalArgumentException("Weight cannot be less than zero");
        }
        if (query == null)
        {
            throw new java.lang.NullPointerException("Query cannot be null");
        } 
        
        Term.query = query;
        Term.weight= weight;
    }
    
    
    public static Comparator<Term> byReverseWeightOrder()
    {
        
        return new Comparator<Term>()
        {
            @Override
            public int compare(Term term1, Term term2) 
            {
                if      (term1.weight < term2.weight)
                    return 1;
                else if (term1.weight == term2.weight)
                    return 0;
                else
                    return -1;
            }      
        };
         
    }
    
    public static Comparator<Term> byPrefixOrder(int r)
    {
        if (r < 0)
        {
            throw new java.lang.IllegalArgumentException("Index cannot be less than zero");
        }
        
        return new Comparator<Term>()
        {
            
            @Override
            public int compare(Term term1, Term term2) 
            {
                int index = r;
                if (index >= term1.query.length())
                {
                    index = term1.query.length();
                }
                if (index >= term2.query.length())
                {
                    index = term2.query.length();
                }
                
            
                
                //Compare two strings starting at 0 to index. 
                return term1.query.toLowerCase().substring(0, index).compareTo(term2.query.toLowerCase().substring(0, index));
            }  
        };
    }
   
    //Compares the two terms in lexicographic order by query
    @Override
    public int compareTo(Term that) 
    {
        return query.toLowerCase().compareTo(that.query.toLowerCase());
    }
    
    public long getWeight()
    {
        return weight;
    }
    
    public String getQuery()
    {
        return query;
    }
    
   
    public String toString()
    {
        return weight + "\t" + query;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}