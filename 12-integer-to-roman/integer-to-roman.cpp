class Solution {
public:
    string intToRoman(int num) {
        string ans="";
        // vector<pair<int,string>>p{{1,"I"},{4,"IV"},{5,"V"},{9,"IX"},{10,"X"},{40,"XL"},{50,"L"},{90,"XC"},{100,"C"},{400,"CD"},{500,"D"},{900,"CM"},{1000,"M"}};
       
       unordered_map<int,string>m;
       m[1]="I";
        m[4]="IV";
         m[5]="V"; 
         m[9]="IX";
          m[10]="X";
           m[40]="XL";
            m[50]="L";
             m[90]="XC";
              m[100]="C";
               m[400]="CD";
                m[500]="D";
                 m[900]="CM";
                  m[1000]="M";
        unordered_map<int,int>m1;
         m1[0]=1;
        m1[1]=4;
         m1[2]=5;
         m1[3]=9;
          m1[4]=10;
           m1[5]=40;
            m1[6]=50;
             m1[7]=90;
              m1[8]=100;
               m1[9]=400;
                m1[10]=500;
                 m1[11]=900;
                  m1[12]=1000;
                  
        int l=m.size()-1;
        cout<<l;
        
        while(num>0){
             while(m1[l]>num){
                 l--;
             }
             ans+=m[m1[l]];
             num=num-m1[l];
             
        }
         
        return ans;

    }
};