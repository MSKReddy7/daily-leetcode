class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int nl = name.length();
        int tl = typed.length();

        if(nl>tl) return false;

        int j=0;
        int i=0;

        while(i<nl && j<tl){
            if(name[i] != typed[j]) return false;

            int parCount = 0;
            int count = 0;

            for(int k=i; k<nl && name[i]==name[k]; k++)
                parCount++;

            for(int k=j; k<tl && typed[j]==typed[k]; k++)
                count++;

            cout << i << ' ' << j << ' ' << parCount << ' ' << count;
            
            if(parCount>count) return false;
            
            i+=parCount;
            j+=count;
            
            cout << " -- " << i << ' ' << j << endl;
        }
        return ((i==nl && j<tl) || (j==tl && i<nl)) ? false : true;
    }
};