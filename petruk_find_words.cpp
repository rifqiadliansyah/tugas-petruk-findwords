#include <iostream>
#include <cstring>

using namespace std;
const int cols = 16, rows = 15;

 char words[rows][cols] = {"tgbwwinterwsesn",
                                "aaunttmmhfoodnb",
                                "jlwcqldzmpmvdmr",
                                "asagmquwvvbsohi",
                                "bwplotanadtpgnc",
                                "rewngodjcpnatnk",
                                "eeotwosbqharrsa",
                                "azcgeswewnaknpb",
                                "dinnerqodlwdcar",
                                "onopkwmparktzcc",
                                "qbfrogmamwpweey",
                                "lqzqnnmrzjjsclg",
                                "mosgzczetdbooto",
                                "pdcrzmsngrdnrpz",
                                "ohnkzwaterjgtra"};

// char *getWordVertical(int)
// char *reverse(char *);
// bool searchVertical(char *);
bool searchHorizontal(char *word){
        bool buktikan;
        char *counter;
        for(int i=0;i<rows;i++){
            counter= *(words+i);     //Masih Ada Bug
                             
            if(strstr(counter, word))
               {
                 buktikan = true;
                 break;
               }
            else
               {
                buktikan = false;
               }        
    }
        return buktikan;      
    }


int main()
{    
    char word[16];
    int n;
    cin>>n;
    cin.ignore(n);
    for (int i=0;i<n;i++){
        cin.getline(word,16,'\n');
        if (/*searchVertical(word) ||*/ searchHorizontal(word)==true)
            cout << "Ada\n";
        else 
            cout << "Tidak Ada\n";
            
    }
    return 0;
    
    
}
