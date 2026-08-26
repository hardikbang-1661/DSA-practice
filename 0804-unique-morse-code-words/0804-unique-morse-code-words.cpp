class Solution {
public:
    string morseEncode(char x) {
        switch(x) {
            case 'a': return ".-";
            case 'b': return "-...";
            case 'c': return "-.-.";
            case 'd': return "-..";
            case 'e': return ".";
            case 'f': return "..-.";
            case 'g': return "--.";
            case 'h': return "....";
            case 'i': return "..";
            case 'j': return ".---";
            case 'k': return "-.-";
            case 'l': return ".-..";
            case 'm': return "--";
            case 'n': return "-.";
            case 'o': return "---";
            case 'p': return ".--.";
            case 'q': return "--.-";
            case 'r': return ".-.";
            case 's': return "...";
            case 't': return "-";
            case 'u': return "..-";
            case 'v': return "...-";
            case 'w': return ".--";
            case 'x': return "-..-";
            case 'y': return "-.--";
            case 'z': return "--..";
        }
        return "";
    }
    int uniqueMorseRepresentations(vector<string>& words) {
        string str="";
        set<string> s;
        for(int i=0;i<words.size();i++){
            str="";
            for(int j=0;j<words[i].length();j++){
                str+=morseEncode(words[i][j]);
            }
            s.insert(str);
        }
        return s.size();
    }
};