/*Created: Sunday, September 30th, 2018
 *Purpose: 'Term' will be used to store a string and weight.  Compare methods will be implemented.
 *Class:   Data Structures 
 *Author:  Frankie Dunbar
 *
 *Collaborators: Travis Wheeler (explaining big picture), Tommy Colligan (java syntax, purpose of
 * individual methods)
 */
 
import java.util.Arrays;
import java.util.Comparator;

public class BinarySearchDeluxe {
    
    public static <Key> int firstIndexOf(Key[] a, Key key, Comparator<Key> comparator)
    {
       
        
        int low = 0;
        int high = a.length-1;
        int firstIndex = -1;
        
        while (low <= high)
        {
            int middle = low + (high - low) / 2;
            
            //Comparator returns 1 if key < array[middle]
            if (comparator.compare(key, a[middle]) < 0)
            {
                high = middle - 1;
                continue;
            }
            
            //Comparator returns -1 if key > a[middle]
            else if (comparator.compare(key, a[middle]) > 0) 
            {
                low = middle + 1;
                continue;
            }
            
            
            else
            {
                //Save location of number that has been found.
                firstIndex = middle;
                
                //Binary search left half until first index is found.
                high = middle - 1;
            }
        }
       
        return firstIndex; 
        
    }
    
    //============================================
    public static <Key> int lastIndexOf(Key[] a, Key key, Comparator<Key> comparator)
    {
       
        
        int low = 0;
        int high = a.length-1;
        int lastIndex = -1;
        
        while (low <= high)
        {
            int middle = low + (high - low) / 2;
            
            //Comparator returns 1 if key < array[middle]
            if (comparator.compare(key, a[middle]) < 0)
            {
                high = middle - 1;
                continue;
            }
            
            //Comparator returns -1 if key > a[middle]
            else if (comparator.compare(key, a[middle]) == -1) 
            {
                low = middle + 1;
                continue;
            }
            
            
            else
            {
                //Save location of number that has been found.
                lastIndex = middle;
                
                //Binary search left half until last index is found.
                low = middle + 1;
            }
        }
       
        return lastIndex; 
        
    }
    //===================================================
    public static void main(String[] args)
    { 
        Term[] TermArr = new Term[8];
        TermArr[0] = new Term("Anchorage",294356 );
        TermArr[1] = new Term("Nome", 9921);
        TermArr[2] = new Term("Kusilvak", 8202);
        TermArr[3] = new Term("Dillingham", 4932);
        TermArr[4] = new Term("Codrova", 9278);
        TermArr[5] = new Term("Kodiak", 13448);
        TermArr[6] = new Term("Aleutians", 3370);
        TermArr[7] = new Term("Yukon", 5365);
        
        Term userterm = new Term("Nome",9921);
        
        System.out.println("Sorted by prefix order: r = 4");
        Arrays.sort(TermArr, Term.byPrefixOrder(4));
        for (int i = 0; i < 8; i++) {
            System.out.println(TermArr[i].toString());
            
        }
        int index = lastIndexOf(TermArr, userterm, Term.byPrefixOrder(4) );
        System.out.println(index);
        
        System.out.println(TermArr[index]);
       
    
    
    
    
    
    }
    
    
}
        
    
    
    
    
    
    
    
    
    
    
    
    



