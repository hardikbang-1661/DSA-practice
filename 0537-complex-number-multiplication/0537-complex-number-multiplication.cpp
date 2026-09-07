class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        int a=0,b=0,i=0,j=0,check1=1,check2=1,c=0,d=0,check3=1,check4=1;
        while(num1[i]!='+'){
            if(num1[i]=='-'){
                check1=-1;
                i++;
            }
            else{
                a=a*10+(num1[i]-'0');
                i++;
            }
        }
        while(num2[j]!='+'){
            if(num2[j]=='-'){
                check2=-1;
                j++;
            }
            else{
                b=b*10+(num2[j]-'0');
                j++;
            }
        }
        i++;
        j++;
        while(i<num1.length()-1){
            if(num1[i]=='-'){
                check3=-1;
                i++;
            }
            else{
                c=c*10+(num1[i]-'0');
                i++;
            }
        }
        while(j<num2.length()-1){
            if(num2[j]=='-'){
                check4=-1;
                j++;
            }
            else{
                d=d*10+(num2[j]-'0');
                j++;
            }
        }
        int real=check1*a*check2*b-check3*c*check4*d;
        int complex=check1*a*check4*d+check2*b*check3*c;
        string str1=to_string(real);
        string str2=to_string(complex);
        return str1+"+"+str2+"i";
    }
};