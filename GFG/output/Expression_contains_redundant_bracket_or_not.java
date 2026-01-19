class Solution {
    public static boolean checkRedundancy(String s) {
        // code here
        int n =s.length() ,a =0 ,b=0;
         for(int i=0;i<n-1;i++){
            if(i<n-1)
            if(s.charAt(i)=='(' && s.charAt(i+2)==')') return true;
            if(s.charAt(i)=='(' && s.charAt(i+1)=='(') a=1;
            if(s.charAt(i)==')' && s.charAt(i+1)==')') b=1;
        }
        if(a==1&&b==1)
        return true;
        
        return false;
    }
}