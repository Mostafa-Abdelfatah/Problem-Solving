class Solution {
    public List<String> letterCombinations(String digits) {
        String[] s = new String[10];
        
        s[1] = "";
        s[2] = "abc";
        s[3] = "def";
        s[4] = "ghi";
        s[5] = "jkl";
        s[6] = "mno";
        s[7] = "pqrs";
        s[8] = "tuv";
        s[9] = "wxyz";
        List<String> ans = new ArrayList<String>();
        if (digits.length() == 0) {
            
        } else if (digits.length() == 1) {
            ans = one(s,digits);
        } else if (digits.length() == 2) {
            ans = two(s,digits);
        } else if (digits.length() == 3) {
            ans = three(s,digits);
        } else {
            ans = four(s,digits);
        }


        return ans;
    }
    public List<String> one(String[] s, String d) {
        List<String> ans = new ArrayList<String>();
        int f = Integer.parseInt(String.valueOf(d.charAt(0)));
        for (int i = 0; i < s[f].length();i++) {
            ans.add(String.valueOf(s[f].charAt(i)));
        }
        return ans;
    }

    public List<String> two(String[] s,String d) {
        List<String> ans = new ArrayList<String>();
        int fst = Integer.parseInt(String.valueOf(d.charAt(0)));
        int sed = Integer.parseInt(String.valueOf(d.charAt(1)));
        for (int i = 0; i < s[fst].length();i++) {
            for (int j = 0; j <s[sed].length();j++) {
                ans.add(s[fst].charAt(i) + String.valueOf(s[sed].charAt(j)));
            }
        }
        return ans;
    }
    
    public List<String> three(String[] s, String d) {
        List<String> ans = new ArrayList<String>();
        int fst = Integer.parseInt(String.valueOf(d.charAt(0)));
        int sed = Integer.parseInt(String.valueOf(d.charAt(1)));
        int thr = Integer.parseInt(String.valueOf(d.charAt(2)));
        for (int i = 0; i < s[fst].length(); i++) {
            for (int j = 0; j < s[sed].length(); j++) {
                for (int k = 0; k < s[thr].length(); k++) {
                    ans.add(String.valueOf(s[fst].charAt(i)) + s[sed].charAt(j) + s[thr].charAt(k));
                }
            }
        }
        return ans;
    }

    public List<String> four(String[] s, String d) {
        List<String> ans = new ArrayList<String>();
        int fst = Integer.parseInt(String.valueOf(d.charAt(0)));
        int sed = Integer.parseInt(String.valueOf(d.charAt(1)));
        int thr = Integer.parseInt(String.valueOf(d.charAt(2)));
        int fth = Integer.parseInt(String.valueOf(d.charAt(3)));
        for (int i = 0; i < s[fst].length(); i++) {
            for (int j = 0; j < s[sed].length(); j++) {
                for (int k = 0; k < s[thr].length(); k++) {
                    for (int h = 0; h < s[fth].length(); h++) {
                        ans.add(String.valueOf(s[fst].charAt(i)) + s[sed].charAt(j) + s[thr].charAt(k) + s[fth].charAt(h));
                    }
                }
            }
        }
        return ans;
    }

    
}



// https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/