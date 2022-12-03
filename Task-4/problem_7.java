import java.util.*;

public class problem_7 {
        public static List<List<String>> groupAnagrams(String[] strs) {
            List<List<String>> res = new ArrayList<>();
            HashMap<String, List<String>> map = new HashMap<>();
            for(int i=0;i<strs.length;i++){
                char str[] = strs[i].toCharArray();
                // sort string
                Arrays.sort(str);
                String s = String.valueOf(str);
                if(map.get(s)!=null){
                    List<String> a = map.get(s);
                    a.add(strs[i]);
                    map.put(s, a);
                }
                else{
                    List<String> a = new ArrayList<>();
                    a.add(strs[i]);
                    map.put(s, a);
                }
            }
            for(Map.Entry<String, List<String>> en:map.entrySet()){
                res.add(en.getValue());
            }
            return res;
        }
        public static void main (String[] args) throws java.lang.Exception
        {
            Scanner input = new Scanner(System.in);
            System.out.println("Input :");
            int n = input.nextInt();
            String[] str = new String[n];
            for (int i =0 ; i <n ; i++)
            {
                str[i] = input.next();
            }
            List<List<String>> res = groupAnagrams(str);
            System.out.println("Output :");
            System.out.println(res);
        }
}
