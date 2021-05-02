#include <iostream>
#include <cstring>

using namespace std;
const int cols = 16, rows = 15;

 char words[rows][cols] =      {"tgbwwinterwsesn",
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

char *getWordVertical(int a){
	 static char counter[16] ;
	 for(int i=0;i<rows;i++){
            counter[i]= words[i][a];   
    }
	return counter;	
}

char *reverse(char *word){

	static char simpan[16];
    for(int i=0;i<(int)strlen(word);i++)
{
    simpan[i]=word[14-i];
    
}

return simpan;
}

 bool searchVertical(char *word){
 	bool buktikan;
 	char *counter;
 	for (int a = 0 ; a < 15; a++){
 		counter  = getWordVertical(a);
 		if(strstr(counter, word) || strstr(reverse(counter), word))
               {
                buktikan = true;
                break;
               }
               else {
                buktikan = false;
               }    
	    
    }
        return buktikan;      
    }

bool searchHorizontal(char *word){
        bool buktikan;
        char *counter;
        for(int i = 0; i < rows ; i++){
            counter = *(words+i);            
           if(strstr(counter, word) || strstr(reverse(counter), word))
               {
                buktikan = true;
                break;
               }
               else {
                buktikan = false;
               }    
	    
    }
        return buktikan;      
    }
int main(){    
    char word[16];
    int n;
    cin>>n;
    cin.ignore(n,'\n');
    for (int i=0;i<n;i++){
        cin.getline(word,16,'\n');
        if (searchVertical(word) || searchHorizontal(word))
            cout << "Ada\n";
        else 
          cout << "Tidak Ada\n";
            
    }
    return 0;
}
