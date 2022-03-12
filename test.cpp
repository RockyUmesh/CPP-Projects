#include"bits/stdc++.h"
using namespace std;

void mint(string p1,string p2){
    string s;
    string mint0="#include<iostream>\nusing namespace std;\nint main(){\ncout<<\"pnum=\";\nlong long unsigned int n,pe,i;\n";
    string mint1="cin>>n;\ncout<<\"initp=\";\ncin>>pe;\ncout<<\"Num after conversion:\"<<endl;\nfor(i=1;i<=n;i++){\n";
    string mint2="pe+="+p1+";\npe*="+p2+";\n}\ncout<<pe<<endl;\nsystem(\"pause\");\nreturn 0;\n}";
    string mint=mint0+mint1+mint2;
    ofstream fout0("C:\\OCEAN\\");
    fout0<<s;
    fout0.close();
}
void def_path_setup(){
    //system("mkdir C:\\OCEAN\\");
}
string endecrypt(string text,int s)
{
    string result = "";
    for (int i=0;i<text.length();i++)
        result += char(int(text[i]+s-32)%96 +32);
    return result;
}

void mdi(string s , char *ad){
    ofstream fout0(ad);
    fout0<<s;
    fout0.close();
    system(ad);
}

void mdo(string s , char *ad , string sad, string aad , int inf){
    ofstream fout0(ad);
    fout0<<s;
    fout0.close();
    system(ad);

    string s1,s2,sd;
    //s1="mkdir ";
    int i=0;
    for(;i<inf;i++){
        s2=to_string(i);
        sd=aad+sad+"\\"+s2;
        mdi(sd,ad);
    }
}
void fldr(int otf ,int inf,string ad){

    string s1,s2,s,aad;
    s1="mkdir ";

    aad=s1+ad+"\\";


    //otf-outer folder no. & inf-in folder no.

    cout<<"It will take some time to make 100x1000 folders at the path you have selected so not to"
    <<" **worry you can do your work but keep it resume in the BACKGROUND**"<<endl;

    tam:

    cout<<"Want to customize the number of folders (Answer in y/n) ?"<<endl;
    string nswr;
    cin>>nswr;

    if(nswr=="y" || nswr=="Y"){
        cout<<"Number of outer folder to create = ";
        cin>>otf;
        cout<<"Number of inner folder to create = ";
        cin>>inf;
    }
    else if(nswr=="n" || nswr=="N"){
        otf=100,inf=1000;
        goto cntn;
    }
    else {
            cout<<"Try again"<<endl;
            goto tam;
    }
    //cout<<"aad= "<<aad<<endl;

    cntn:
    
    ad=ad+"\\rdx.bat";
    //cout<<"ad= "<<ad<<endl;

    int n=ad.length();
    char *a[n];
    for(int i=0;i<n;i++){
        a[i]=&ad[i];
    }
    //system(a);

    //cout<<"*a= "<<*a<<endl;

    string sdel="del "+ad;

    int m=sdel.length();
    char *delt[m];
    for(int i=0;i<m;i++){
        delt[i]=&sdel[i];
    }
    //cout<<"*del="<<*delt<<endl;

    int i=0;
    for(;i<otf;i++){
        s2=to_string(i);
        s=aad+s2;
        mdo(s ,*a , s2 , aad , inf);
    }
    
    //delete rdx.bat
    system(*delt);
    string chk="1";
    //this is the targeted path
    //F:\\text\\info\\Captures\\65\\386\\0\\Dead_zone.txt"
    ofstream fout0("F:\\text\\info\\Captures\\65\\386\\0\\Dark_zone.txt");
    fout0<<chk;
    fout0.close();
    cout<<"SETUP SUCCESS"<<endl;
}


/*
Backup path- I:\My Drive\Vedios\vvideos\Captures\65\38(want to)
real path - F:\Vedios\vvideos\Captures\65\38

path= F:\\Vedios\\vvideos\\Captures\\65\\38\\
real bath= F:\\Subjects\\Mi\\SBI\\SPF\\CrntAff\\
*/

int main(){

    system("title LOCKI (The HIDE-OUT LOCK SYSTEM)");
    cout<<"Weclome to the new LOCK system -developed by UMESH KUMAR AHIRWAR"<<endl;

    cout<<"Warning!...\nDon't delete the folder *OCEAN* made in (C:)Drive and also don't change the name."<<endl;
    cout<<"As OCEAN folder contains your data for this application."<<endl;  
    system("mkdir C:\\OCEAN\\");
    system("mkdir C:\\OCEAN\\Workstation");
    
    long long unsigned int rp,sp=0,ip,t=0,tl=0,twl=0;
    int nf=0;
    string run,iun,chk="0",path,d_path="C:\\OCEAN\\",ln1,ln2;
    string test_path;
    string darkzone="Dark_zone.uka";

    ifstream fin0a("C:\\OCEAN\\Dark_zone.txt");
    fin0a>>chk;

    if(chk!="1"){
        ta:
        cout<<"Want to add the path (Answer in y/n) ?"<<endl;
        string nswr;
        cin>>nswr;
        if(nswr=="y" || nswr=="Y"){
            cout<<"Add the path **CAREFULLY** where you want to make the folders:\n(example- Z:\\Car\\BMW)"<<endl;
            cout<<"NOTE-**If you are pasting then after copying come here and right-click to paste.**"<<endl;
            cin>>path;
            cout<<"What are your two lucky number in which you want to put your precious text files\n"<<endl;
            cout<<"Lucky number 1:";
            cin>>ln1;
            cout<<"Lucky number 2:";
            cin>>ln2;
            fldr(100,1000,path);
            path=path+ln1+"\\"+ln2+"\\";
        }
        else if(nswr=="n" || nswr=="N"){
            path.erase();
            path=d_path;
            goto cntr;
        }
        else {
            cout<<"Try again"<<endl;
            goto ta;
        }
    }

    cntr:

    test_path=path;

    ifstream fin0("F:\\Vedios\\vvideos\\Captures\\65\\386\\0\\Dead_zone.uka");
    fin0>>t;

    if(t!=5){
        t=5;

        system("title LOCK SYSTEM REGISTRATION");

        cout<<"Register:"<<endl;
        cout<<"Enter the username:"<<endl;
        cin>>run;

        cout<<"Enter password:"<<endl;
        cin>>rp;
        
        sp=rp;
        sp+=5;
        sp*=2;
        rp=sp;
        system("cls");
        system("title LOCK SYSTEM REGISTRATION");
        //system("clear");

        cout<<"Registration Completed!!"<<endl;

        ofstream fout0("F:\\Vedios\\vvideos\\Captures\\65\\386\\0\\Dead_zone.uka");
        fout0<<t;
        fout0.close();
        
        ofstream fout1("F:\\Vedios\\vvideos\\Captures\\65\\386\\0\\War_zone.txt");
        fout1<<rp<<endl;//<<tl;
        fout1.close();
        ofstream fout2("F:\\Vedios\\vvideos\\Captures\\65\\386\\0\\Peace_zone.txt");
        fout2<<run;
        fout2.close();
        ofstream fout3("F:\\Vedios\\vvideos\\Captures\\65\\386\\0\\Active_zone.txt");
        fout3<<twl;
        fout3.close();
        ofstream fout7("F:\\Vedios\\vvideos\\Captures\\65\\386\\0\\Care_zone.txt");
        fout7<<tl<<endl;//<<tl;
        fout7.close();
        ofstream ffc("F:\\Vedios\\vvideos\\Captures\\65\\386\\0\\Count_zone.txt");
        ffc<<nf;
        ffc.close();
    }
    system("title LOCK SYSTEM LOGIN");

    ifstream rfc("F:\\Vedios\\vvideos\\Captures\\65\\386\\0\\Count_zone.txt");
    rfc>>nf;

    if(nf==16){
        //cout<<"in";//just to check
        tl=0;
        ofstream foutcz1("F:\\Vedios\\vvideos\\Captures\\65\\386\\0\\Care_zone.txt");
        foutcz1<<tl;
        foutcz1.close();

        rp=30;
        ofstream fout40("F:\\Vedios\\vvideos\\Captures\\65\\386\\0\\War_zone.txt");
        fout40<<rp;
        fout40.close();
            
        twl=0;
        ofstream fout05("F:\\Vedios\\vvideos\\Captures\\65\\386\\0\\Active_zone.txt");
        fout05<<twl;
        fout05.close();

    }

    ifstream fin("F:\\Vedios\\vvideos\\Captures\\65\\386\\0\\Care_zone.txt");
    fin>>tl;//>>tl

    ifstream fin1("F:\\Vedios\\vvideos\\Captures\\65\\386\\0\\War_zone.txt");
    fin1>>rp;//>>tl
    
    ifstream fin2("F:\\Vedios\\vvideos\\Captures\\65\\386\\0\\Active_zone.txt");
    fin2>>twl;
    sp=0;
    sp=rp;
    sp=sp/2;
    sp=sp-5;
    rp=sp;
    //cout<<"orig pwd:"<<rp<<endl;
    cout<<"Enter username"<<tl<<endl;
    cin>>iun;
    if(iun=="exit"||iun=="quit"||iun=="0"||iun=="o") exit(0);
    //getline(cin,iun);
    cout<<"Enter the password"<<twl<<endl;
    cin>>ip;
    
    //int c=strcmp(run,iun);
    //if(run==iun) cout<<"success";
    //if(iun.compare(run)==0) cout<<"success";
    //else cout<<"f";
    //exit(0);
    
    //cout<<"at 1st:\nrp="<<rp<<"\nsp="<<sp<<endl;
    
    if( (sp==ip) ){//&& (iun.compare(run)==0)
        //system("cls");
        
        system("title LOCK SYSTEM");
        cout<<"WELCOME,to the Notepad"<<endl;
        string p0="notepad ";
        string p1="F:\\Vedios\\vvideos\\Captures\\65\\386\\";
        string p2="zke";
        string p3=".txt";
        string p4="F:\\Subjects\\Mi\\SBI\\SPF\\CrntAff\\";
        string fpt=p1+p2+p3;
        string snt=p0+fpt;
        const char *fcss=snt.c_str();//method to convert string to char array
        //int x=tl;
        //string ns=to_string(x);
        //fpt=p1+p2+ns+p3;

        system(fcss);

        //to make a copy
        string src=fpt,trgt=p4+"fukusei_data"+p3;
        char ch;

        ifstream infilec(src);//creating file for input
        ofstream outfilec(trgt);//creating file for output

        while(infilec){
            infilec.get(ch);
            outfilec.put(ch);
        }
        //system("fpt");

        nf++;
        ofstream ffc1("F:\\Vedios\\vvideos\\Captures\\65\\386\\0\\Count_zone.txt");
        ffc1<<nf;
        ffc1.close();
    }
    else{
        cout<<"Incorrect Username or Password"<<endl;
        twl++;
        
        if(twl==10){
            twl=0;
            cout<<"Warning!!!..data you are looking for is being deleted"<<endl;
            exit(0);
        }
        else{
            cout<<"Warning!!!...\nIf you entered the wrong password then the data you are looking for will be deleted."<<endl;
            cout<<"Remaining chances : "<<10-twl<<endl;
        }
        
        ofstream fout5("F:\\Vedios\\vvideos\\Captures\\65\\386\\0\\Active_zone.txt");
        fout5<<twl;
        fout5.close();
    }

    sp=rp;
    sp+=5;
    sp*=2;
    sp+=5;
    sp*=2;
    rp=sp;
    //cout<<"at 2nd:\nrp="<<rp<<"\nsp="<<sp<<endl;
    ofstream fout4("F:\\Vedios\\vvideos\\Captures\\65\\386\\0\\War_zone.txt");
    fout4<<rp;
    fout4.close();
    
    tl++;
    ofstream foutcz("F:\\Vedios\\vvideos\\Captures\\65\\386\\0\\Care_zone.txt");
    foutcz<<tl;
    foutcz.close();

    system("pause");
    return 0;
}