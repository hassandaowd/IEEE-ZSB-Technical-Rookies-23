package second.task;
public class problem_5 {
    /*** methods of insertion sort (up , down)***/
    public static void insertionSortUp(int[] a) {
        int i, j, key;
        for (i = 0; i < a.length; i++) {
            key = a[i];
            j = i - 1;
            while ((j >= 0) && (a[j] > key)) {
                a[j + 1] = a[j];
                j = j - 1;
            }
            a[j + 1] = key;
        }
    }
    public static void insertionSortDown(int[] a) {
        int i, j, key;
        for (i = 0; i < a.length; i++) {
            key = a[i];
            j = i - 1;
            while ((j >= 0) && (a[j] < key)) {
                a[j + 1] = a[j];
                j = j - 1;
            }
            a[j + 1] = key;
        }
    }
    /**** method to print the array ***/
    public static void printArray(int[] a) {
        int n = a.length;
        System.out.print(" { ");
        for (int i = 0; i < n; ++i) {
            System.out.print(a[i]);
            if (i < n - 1)
                System.out.print(" , ");
        }
        System.out.println(" }");
    }

    public static void main(String[] args) {
        int[] a = {13,5,8, 11,7 , 6, 10, 9, 1,2,12,3,4};
        int[] b = new int[a.length];
        for (int i = 0; i < a.length; i++)  b[i] = a[i];
        System.out.println(" ********* Insertion Sort *********\n ********* Before Sorting *********");
        printArray(a);
        insertionSortUp(a);
        System.out.println(" After Sorting in Ascending order");
        printArray(a);
        System.out.println(" ********* Before Sorting *********");
        printArray(b);
        insertionSortDown(b);
        System.out.println(" After Sorting in Descending Order ");
        printArray(b);
    }
}
