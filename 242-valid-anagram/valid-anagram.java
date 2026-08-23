class Solution {
    public boolean isAnagram(String s, String t) {
     Map<Character,Integer>mp1=new HashMap<>();
     Map<Character,Integer>mp2=new HashMap<>();
     int n=s.length();
     int m=t.length();
     if(n!=m)
     return false;
     for(char st:s.toCharArray())
     {
        mp1.put(st,mp1.getOrDefault(st,0)+1);
     }
     for(char st:t.toCharArray())
     {
        mp2.put(st,mp2.getOrDefault(st,0)+1);
     }
     return mp1.equals(mp2);
    }
}