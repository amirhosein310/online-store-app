#include <iostream>
#include <fstream>
#include<conio.h>
#include <cstring>
using namespace std;

int print();
int menu();
int gozine1();
int gozine2();
int gozine3();
int gozine4();
int gozine5();
int gozine6();
int bishtarin_kharid();
int products_update ();
int a=1, avg=2, c=3;
int x;
char username[20]={0}, zero[20]={0}, useractive[20]={0};
int k1, k2, k3, k4, k5, k6, k7, k8, k9, k10;





////////////////////////////////




int gozine5 (){
	system("CLS");
	char product[20]={0}, customer[20]={0}, voroud[20]={0};
	ifstream log;
	log.open("log.txt", ios::in);
	while (  !(log.eof())  ) {
		log>>voroud;
		if (strcmp(voroud,"Voroude:")==0) {
			log>>customer;
			do {
				log>>product;
				if (strcmp(product,"kala1")==0){			
				cout<<"kala1: ";
				cout<<customer<<endl;	
				}
				if (strcmp(product,"kala2")==0){
				cout<<"kala2: ";
				cout<<customer<<endl;	
				}
				if (strcmp(product,"kala3")==0) {
				cout<<"kala3: ";
				cout<<customer<<endl;	
				}
				if (strcmp(product,"kala4")==0) {
				cout<<"kala4: ";
				cout<<customer<<endl;	
				}
				if (strcmp(product,"kala5")==0) {
				cout<<"kala5: ";
				cout<<customer<<endl;	
				}
				if (strcmp(product,"kala6")==0) {
				cout<<"kala6: ";
				cout<<customer<<endl;
				}	
				if (strcmp(product,"kala7")==0) {
				cout<<"kala7: ";
				cout<<customer<<endl;
				}
				if (strcmp(product,"kala8")==0) {
				cout<<"kala8: ";
				cout<<customer<<endl;
				}	
				if (strcmp(product,"kala9")==0) {
				cout<<"kala9: ";
				cout<<customer<<endl;
				}	
				if (strcmp(product,"kala10")==0) {
				cout<<"kala10: ";
				cout<<customer<<endl;
				}	
				
				
							
			
		
			} while (strcmp(product,"Voroude:")!=0 || strcmp(product,"Khorouje:")!=0);
			
		}
			
		log>>product;
		if (strcmp(product,"kala1")==0) {
			cout<<"kala1";
			cout<<customer;			
		}	
	}
	
	
	

}




////////////////////////////////





int gozine6 (){
	int a;
	ofstream log;

log.open("log.txt", ios::app);
	if (strcmp(username,zero)!=0){

		log<<"Khorouje:"<<endl;
		log<<username;
		log.close();
		memset(username, 0, sizeof(username));
		cout<<"Shoma Kharej Shodid!"<<endl<<"Baraye Edame Adadi ra Vared Konid"<<endl;
		cin>>a;
	}
	else {
		cout<<"Shoma Vared Nashodeid!"<<endl<<"Baraye Edame Adadi ra Vared Konid"<<endl;
		cin>>a;
	}
	system("CLS");
	menu();
	
}




////////////////////////////////






int gozine4 (){
	system("CLS");
	products_update();
	int a;
	
	cout<<"Mojoudi Kalaha:"<<endl;
	cout<<"kala1: "<<12-k1<<endl;
	cout<<"kala2: "<<14-k2<<endl;
	cout<<"kala3: "<<10-k3<<endl;
	cout<<"kala4: "<<8-k4<<endl;
	cout<<"kala5: "<<25-k5<<endl;
	cout<<"kala6: "<<5-k6<<endl;
	cout<<"kala7: "<<12-k7<<endl;		
	cout<<"kala8: "<<17-k8<<endl;	
	cout<<"kala9: "<<20-k9<<endl;	
	cout<<"kala10: "<<5-k10<<endl;
	
	cout<<"Baraye Edame Adadi ra Vared Konid"<<endl;
	cin>>a;
	system("CLS");
	menu();
	
	

	
	
}








////////////////////////////////




int print(){
	
	cout<<"1- Voroude Karbar"<<endl;
	cout<<"2- Sabte Name Karbar"<<endl;
	cout<<"3- Kharide Karbar"<<endl;
	cout<<"4- Namayeshe Liste Kalahaye Mojoud"<<endl;
	cout<<"5- Namayeshe Kharid Haye Soorat Gerefte"<<endl;
	cout<<"6- Khorouje Karbar"<<endl;
}





////////////////////////////////




int menu (){
	print();
	
	do {
		cout<<"Lotfan Entekhab Konid (1 ta 6):"<<endl;
		cin>>x;
	} while (!(x>=1 && x<=6));
	
	if (x==1)
	gozine1();
	
	if (x==2)
	gozine2();
	
	if (x==3)
	gozine3();
	
	if (x==4)
	gozine4();
	
	if (x==5)
	gozine5();
	
	if (x==6)
	gozine6();
}





////////////////////////////////






int gozine1 () {
	system("CLS");
	int count=0;
	ifstream u;
	u.open("users.txt", ios::in);
	char password[20]={0}, pass_check[20]={0}, user_check[20]={0};
	cout<<"Username ra Vared Konid:"<<endl;
	cin>>username;
	cout<<"Password ra Vared Konid:"<<endl;	
	cin>>password;

	
	
	while (  !( u.eof() )  ){
		u>>user_check;
		if (strcmp(user_check,username)==0) {
			u>>pass_check;
			break;
		}
	}
	
	if ( strcmp(pass_check,password)!=0 ){
		for (int i=0; i<20; i++){
			username[i]='0';
		}
		system("CLS");
		cout<<"User/Pass Eshtebah Ast."<<endl;
		menu();	
	}
	else {
		ofstream v;
		v.open("log.txt", ios::app);
		v<<"Voroude:"<<endl<<username<<endl;
		system("CLS");
		cout<<"Ba Movafaghiat Vared Shodid."<<endl;
		v.close();
		menu();	
	}
	

	u.close();
}




////////////////////////////////





int gozine2 (){
	system("CLS");
	char password[20]={0};
	cout<<"Username ra Vared Konid"<<endl;
	cin>>username;
	cout<<"Password ra Vared Konid"<<endl;
	cin>>password;
	ofstream u;
	u.open("users.txt", ios::app);
	u<<endl;
	u<<username<<endl;
	u<<password<<endl;
	u.close();
	menu();
}





////////////////////////////////






int bishtarin_kharid () {
	products_update ();
	system("CLS");

	int kala1=0, kala2=0, kala3=0, kala4=0, kala5=0, kala6=0, kala7=0, kala8=0, kala9=0, kala10=0, tedad=0;
	ifstream u;
	u.open("log.txt", ios::in);
	char user_check[20]={0} ,  kala_check[20]={0};
	
	
		while (  !( u.eof() )  ){
		u>>user_check;
		if (strcmp(user_check,username)==0) {
			u>>kala_check;
				if (strcmp(kala_check,"kala1")==0){
					u>>tedad;
					kala1+=tedad;
				}
				else if (strcmp(kala_check,"kala2")==0){
					u>>tedad;
					kala2+=tedad;
				}
				else if (strcmp(kala_check,"kala3")==0){
					u>>tedad;
					kala3+=tedad;	
				}														
				else if (strcmp(kala_check,"kala4")==0){
					u>>tedad;
					kala4+=tedad;
				}
				else if (strcmp(kala_check,"kala5")==0){
					u>>tedad;
					kala5+=tedad;
				}
				else if (strcmp(kala_check,"kala6")==0){
					u>>tedad;
					kala6+=tedad;
				}	
				else if (strcmp(kala_check,"kala7")==0){
					u>>tedad;
					kala7+=tedad;
				}
				else if (strcmp(kala_check,"kala8")==0){
					u>>tedad;
					kala8+=tedad;
				}
				else if (strcmp(kala_check,"kala9")==0){
					u>>tedad;
					kala9+=tedad;
				}						
				else if (strcmp(kala_check,"kala10")==0){
					u>>tedad;
					kala10+=tedad;	
				}
		}		
	}
	
 u.close();

	int arr[11]={kala1,kala2,kala3,kala4,kala5,kala6,kala7,kala8,kala9,kala10};
	for (int i=3; i<10; i++) {
		if (arr[i]>=a){
			c = avg;
			avg = a;
			a = i+1;
		}
		if (arr[i]<=a){
			if (arr[i]>=avg){
				c = avg;
				avg = i+1;
			}
			else if (arr[i]>=c)
				c = i+1 ;
		}
	}
	
	cout<<"3 Kalaye Bishtar Kharidari Shodeye Shoma:"<<endl;
	if (a==1)
		cout<<"Kala1"<<endl;
	if (a==2)
		cout<<"Kala2"<<endl;
	if (a==3)
		cout<<"Kala3"<<endl;
	if (a==4)
		cout<<"Kala4"<<endl;
	if (a==5)
		cout<<"Kala5"<<endl;
	if (a==6)
		cout<<"Kala6"<<endl;
	if (a==7)
		cout<<"Kala7"<<endl;						
	if (a==8)
		cout<<"Kala8"<<endl;
	if (a==9)
		cout<<"Kala9"<<endl;
	if (a==10)
		cout<<"Kala10"<<endl;

	if (avg==1)
		cout<<"Kala1"<<endl;
	if (avg==2)
		cout<<"Kala2"<<endl;
	if (avg==3)
		cout<<"Kala3"<<endl;
	if (avg==4)
		cout<<"Kala4"<<endl;
	if (avg==5)
		cout<<"Kala5"<<endl;
	if (avg==6)
		cout<<"Kala6"<<endl;
	if (avg==7)
		cout<<"Kala7"<<endl;
	if (avg==8)
		cout<<"Kala8"<<endl;
	if (avg==9)
		cout<<"Kala9"<<endl;
	if (avg==10)
		cout<<"Kala10"<<endl;

	if (c==1)
		cout<<"Kala1"<<endl;
	if (c==2)
		cout<<"Kala2"<<endl;
	if (c==3)
		cout<<"Kala3"<<endl;
	if (c==4)
		cout<<"Kala4"<<endl;
	if (c==5)
		cout<<"Kala5"<<endl;
	if (c==6)
		cout<<"Kala6"<<endl;
	if (c==7)
		cout<<"Kala7"<<endl;
	if (c==8)
		cout<<"Kala8"<<endl;
	if (c==9)
		cout<<"Kala9"<<endl;
	if (c==10)
		cout<<"Kala10"<<endl;

	cout<<"Baghieye Kalaha:"<<endl;
	for (int i=1; i<=10; i++) {
		if (i!=a && i!=avg && i!=c)
		cout<<"Kala"<<i<<endl;	
	}
}







////////////////////////////////






int products_update (){
	char khat[20]={0};
	int k;
	ifstream u;
	ofstream p;
	u.open("log.txt", ios::in);

	while (  !(u.eof())  ) {
 		u>>khat;
 		if (strcmp(khat,"kala1")==0) {
 				u>>k;
 				k1+=k1;
			}
 		if (strcmp(khat,"kala2")==0) {
 				u>>k;
 				k1+=k2;
			}			
 		if (strcmp(khat,"kala3")==0) {
 				u>>k3;
 				k1+=k;
			}			
 		if (strcmp(khat,"kala4")==0) {
 				u>>k;
 				k1+=k4;
			}
 		if (strcmp(khat,"kala5")==0) {
 				u>>k;
 				k1+=k5;
			}			
 		if (strcmp(khat,"kala6")==0) {
 				u>>k;
 				k1+=k6;
			}			
 		if (strcmp(khat,"kala7")==0) {
 				u>>k;
 				k1+=k7;
			}			
 		if (strcmp(khat,"kala8")==0) {
 				u>>k;
 				k1+=k8;
			}			
 		if (strcmp(khat,"kala9")==0) {
 				u>>k;
 				k1+=k9;
			}			
 		if (strcmp(khat,"kala10")==0) {
 				u>>k10;
 				k1+=k9;
			}						
	}
	u.close();
	p.open("products.txt", ios::out);
	
	p<<"kala1"<<endl;
	p<<"1500"<<endl;
	p<<12-k1<<endl;

	p<<"kala2"<<endl;
	p<<"4500"<<endl;
	p<<14-k2<<endl;

	p<<"kala3"<<endl;
	p<<"300"<<endl;
	p<<10-k3<<endl;
	
	p<<"kala4"<<endl;
	p<<"900"<<endl;
	p<<8-k4<<endl;

	p<<"kala5"<<endl;
	p<<"100"<<endl;
	p<<25-k5<<endl;
	
	p<<"kala6"<<endl;
	p<<"15000"<<endl;
	p<<5-k6<<endl;
	
	p<<"kala7"<<endl;
	p<<"600"<<endl;
	p<<12-k7<<endl;
	
	p<<"kala8"<<endl;
	p<<"750"<<endl;
	p<<17-k8<<endl;
	
	p<<"kala9"<<endl;
	p<<"200"<<endl;
	p<<20-k9<<endl;
	
	p<<"kala10"<<endl;
	p<<"4700"<<endl;
	p<<5-k10<<endl;
	
	
	
}







////////////////////////////////

int gozine3 (){
	system("CLS");
	int a;
	if (strcmp(username, zero)==0){
		cout<<"Shoma Hanooz Vared Nashodeid!"<<endl;
		cout<<"Baraye Edame Adadi ra Vared Konid"<<endl;
		cin>>a;
		system("CLS");
		menu();
	}
	bishtarin_kharid();
	products_update ();
		
	int shomare;
	char kala_name[7]={0}, user_check[20]={0}, alaki[20]={0};
	int mojoudi, tedad_kharid, tkala=0, tkala_jam=0;
	float gheymat, takhfif;
	int adad;
	
	cout<<"Hala Kode Kala ra Vared Konid (shomare kala) / Baraye Khorouj 0 ra Vared Konid" <<endl;
	cin>>shomare;
	if (shomare==0)
		menu();
		
	fstream kala;
	fstream log;

	kala.open("products.txt", ios::in);







	
	if (shomare==10) {                                     //injash
		while ( !(kala.eof()) ) {
			kala>>kala_name;
			if (strcmp(kala_name,"kala10")==0) {               //injash
				kala>>gheymat; 
				kala>>mojoudi;
				if (  mojoudi==0) {
						cout<<"Moteasefane Kala Mojoud Nist!"<<endl;
						cout<<"Baraye Edame Kharid, Adadi Vared konid va Enter ra Bezanid"<<endl;
						cin>>adad;
						system("CLS");
						gozine3();
						
					}
				else {
					cout<<"Gheymate Kala= "<<gheymat<<endl;			
					cout<<"Tedade Kharid ra Vared Konid:"<<endl;
					cin>>tedad_kharid;
					cout<<"Gheymate Kol= "<<gheymat * tedad_kharid<<endl;
					kala.close();
					log.open("log.txt", ios::in);
					while (  !(log.eof())  ) {
						log >> user_check;
							if (strcmp(user_check, username)==0) {
								log >> alaki;
								
								if (   strcmp(alaki,"kala1")==0 || strcmp(alaki,"kala2")==0 || strcmp(alaki,"kala3")==0 || 
										strcmp(alaki,"kala4")==0 || strcmp(alaki,"kala5")==0 || strcmp(alaki,"kala6")==0 ||
										strcmp(alaki,"kala7")==0 || strcmp(alaki,"kala8")==0 || strcmp(alaki,"kala9")==0 ||
										strcmp(alaki,"kala1")==0) {
											
											log >> tkala;
											tkala_jam += tkala;
						
										}
								
								
							}
					}
					log.close();	
					if (tkala_jam>=10) {
						takhfif = gheymat / 5 ;
						cout<<"Takhfife Kol= "<< takhfif * tedad_kharid <<endl;				
					}
					else if (tkala_jam>=20) {
						takhfif = gheymat * 3/10 ;
						cout<<"Takhfife Kol= "<< takhfif * tedad_kharid <<endl;
					}
					else {
						takhfif = gheymat * 1/10 ;
						cout<<"Takhfife Kol= "<< takhfif * tedad_kharid <<endl;
					}
					
					log.open("log.txt", ios::app);
					log << "kala10" << endl;                                  //injash
					log << tedad_kharid << endl;
					log << gheymat <<endl;
					log << takhfif;
					log.close();
					cout<<"Baraye Edame Kharid, Adadi Vared konid va Enter ra Bezanid"<<endl;
					cin>>adad;
					system("CLS");
					gozine3();			
				}
			}
		}
	}
	
	
	
	
	
	if (shomare==1) {                                     //injash
		while ( !(kala.eof()) ) {
			kala>>kala_name;
			if (strcmp(kala_name,"kala1")==0) {               //injash
				kala>>gheymat; 
				kala>>mojoudi;
				if (  mojoudi==0) {
						cout<<"Moteasefane Kala Mojoud Nist!"<<endl;
						cout<<"Baraye Edame Kharid, Adadi Vared konid va Enter ra Bezanid"<<endl;
						cin>>adad;
						system("CLS");
						gozine3();
						
					}
				else {
					cout<<"Gheymate Kala= "<<gheymat<<endl;			
					cout<<"Tedade Kharid ra Vared Konid:"<<endl;
					cin>>tedad_kharid;
					cout<<"Gheymate Kol= "<<gheymat * tedad_kharid<<endl;
					kala.close();
					log.open("log.txt", ios::in);
					while (  !(log.eof())  ) {
						log >> user_check;
							if (strcmp(user_check, username)==0) {
								log >> alaki;
								
								if (   strcmp(alaki,"kala1")==0 || strcmp(alaki,"kala2")==0 || strcmp(alaki,"kala3")==0 || 
										strcmp(alaki,"kala4")==0 || strcmp(alaki,"kala5")==0 || strcmp(alaki,"kala6")==0 ||
										strcmp(alaki,"kala7")==0 || strcmp(alaki,"kala8")==0 || strcmp(alaki,"kala9")==0 ||
										strcmp(alaki,"kala1")==0) {
											
											log >> tkala;
											tkala_jam += tkala;
						
										}
								
								
							}
					}
					log.close();	
					if (tkala_jam>=10) {
						takhfif = gheymat / 5 ;
						cout<<"Takhfife Kol= "<< takhfif * tedad_kharid <<endl;				
					}
					else if (tkala_jam>=20) {
						takhfif = gheymat * 3/10 ;
						cout<<"Takhfife Kol= "<< takhfif * tedad_kharid <<endl;
					}
					else {
						takhfif = gheymat * 1/10 ;
						cout<<"Takhfife Kol= "<< takhfif * tedad_kharid <<endl;
					}
					
					log.open("log.txt", ios::app);
					log << "kala1" << endl;                                  //injash
					log << tedad_kharid << endl;
					log << gheymat <<endl;
					log << takhfif;
					log.close();
					cout<<"Baraye Edame Kharid, Adadi Vared konid va Enter ra Bezanid"<<endl;
					cin>>adad;
					system("CLS");
					gozine3();			
				}
			}
		}
	}	
	
	
	
	
	
	if (shomare==2) {                                     //injash
		while ( !(kala.eof()) ) {
			kala>>kala_name;
			if (strcmp(kala_name,"kala2")==0) {               //injash
				kala>>gheymat; 
				kala>>mojoudi;
				if (  mojoudi==0) {
						cout<<"Moteasefane Kala Mojoud Nist!"<<endl;
						cout<<"Baraye Edame Kharid, Adadi Vared konid va Enter ra Bezanid"<<endl;
						cin>>adad;
						system("CLS");
						gozine3();
						
					}
				else {
					cout<<"Gheymate Kala= "<<gheymat<<endl;			
					cout<<"Tedade Kharid ra Vared Konid:"<<endl;
					cin>>tedad_kharid;
					cout<<"Gheymate Kol= "<<gheymat * tedad_kharid<<endl;
					kala.close();
					log.open("log.txt", ios::in);
					while (  !(log.eof())  ) {
						log >> user_check;
							if (strcmp(user_check, username)==0) {
								log >> alaki;
								
								if (   strcmp(alaki,"kala1")==0 || strcmp(alaki,"kala2")==0 || strcmp(alaki,"kala3")==0 || 
										strcmp(alaki,"kala4")==0 || strcmp(alaki,"kala5")==0 || strcmp(alaki,"kala6")==0 ||
										strcmp(alaki,"kala7")==0 || strcmp(alaki,"kala8")==0 || strcmp(alaki,"kala9")==0 ||
										strcmp(alaki,"kala1")==0) {
											
											log >> tkala;
											tkala_jam += tkala;
						
										}
								
								
							}
					}
					log.close();	
					if (tkala_jam>=10) {
						takhfif = gheymat / 5 ;
						cout<<"Takhfife Kol= "<< takhfif * tedad_kharid <<endl;				
					}
					else if (tkala_jam>=20) {
						takhfif = gheymat * 3/10 ;
						cout<<"Takhfife Kol= "<< takhfif * tedad_kharid <<endl;
					}
					else {
						takhfif = gheymat * 1/10 ;
						cout<<"Takhfife Kol= "<< takhfif * tedad_kharid <<endl;
					}
					
					log.open("log.txt", ios::app);
					log << "kala2" << endl;                                  //injash
					log << tedad_kharid << endl;
					log << gheymat <<endl;
					log << takhfif;
					log.close();
					cout<<"Baraye Edame Kharid, Adadi Vared konid va Enter ra Bezanid"<<endl;
					cin>>adad;
					system("CLS");
					gozine3();			
				}
			}
		}
	}	
	
	
	
	
	
	if (shomare==3) {                                     //injash
		while ( !(kala.eof()) ) {
			kala>>kala_name;
			if (strcmp(kala_name,"kala3")==0) {               //injash
				kala>>gheymat; 
				kala>>mojoudi;
				if (  mojoudi==0) {
						cout<<"Moteasefane Kala Mojoud Nist!"<<endl;
						cout<<"Baraye Edame Kharid, Adadi Vared konid va Enter ra Bezanid"<<endl;
						cin>>adad;
						system("CLS");
						gozine3();
						
					}
				else {
					cout<<"Gheymate Kala= "<<gheymat<<endl;			
					cout<<"Tedade Kharid ra Vared Konid:"<<endl;
					cin>>tedad_kharid;
					cout<<"Gheymate Kol= "<<gheymat * tedad_kharid<<endl;
					kala.close();
					log.open("log.txt", ios::in);
					while (  !(log.eof())  ) {
						log >> user_check;
							if (strcmp(user_check, username)==0) {
								log >> alaki;
								
								if (   strcmp(alaki,"kala1")==0 || strcmp(alaki,"kala2")==0 || strcmp(alaki,"kala3")==0 || 
										strcmp(alaki,"kala4")==0 || strcmp(alaki,"kala5")==0 || strcmp(alaki,"kala6")==0 ||
										strcmp(alaki,"kala7")==0 || strcmp(alaki,"kala8")==0 || strcmp(alaki,"kala9")==0 ||
										strcmp(alaki,"kala1")==0) {
											
											log >> tkala;
											tkala_jam += tkala;
						
										}
								
								
							}
					}
					log.close();	
					if (tkala_jam>=10) {
						takhfif = gheymat / 5 ;
						cout<<"Takhfife Kol= "<< takhfif * tedad_kharid <<endl;				
					}
					else if (tkala_jam>=20) {
						takhfif = gheymat * 3/10 ;
						cout<<"Takhfife Kol= "<< takhfif * tedad_kharid <<endl;
					}
					else {
						takhfif = gheymat * 1/10 ;
						cout<<"Takhfife Kol= "<< takhfif * tedad_kharid <<endl;
					}
					
					log.open("log.txt", ios::app);
					log << "kala3" << endl;                                  //injash
					log << tedad_kharid << endl;
					log << gheymat <<endl;
					log << takhfif;
					log.close();
					cout<<"Baraye Edame Kharid, Adadi Vared konid va Enter ra Bezanid"<<endl;
					cin>>adad;
					system("CLS");
					gozine3();			
				}
			}
		}
	}	
	
	
	
	
	
	
	if (shomare==4) {                                     //injash
		while ( !(kala.eof()) ) {
			kala>>kala_name;
			if (strcmp(kala_name,"kala4")==0) {               //injash
				kala>>gheymat; 
				kala>>mojoudi;
				if (  mojoudi==0) {
						cout<<"Moteasefane Kala Mojoud Nist!"<<endl;
						cout<<"Baraye Edame Kharid, Adadi Vared konid va Enter ra Bezanid"<<endl;
						cin>>adad;
						system("CLS");
						gozine3();
						
					}
				else {
					cout<<"Gheymate Kala= "<<gheymat<<endl;			
					cout<<"Tedade Kharid ra Vared Konid:"<<endl;
					cin>>tedad_kharid;
					cout<<"Gheymate Kol= "<<gheymat * tedad_kharid<<endl;
					kala.close();
					log.open("log.txt", ios::in);
					while (  !(log.eof())  ) {
						log >> user_check;
							if (strcmp(user_check, username)==0) {
								log >> alaki;
								
								if (   strcmp(alaki,"kala1")==0 || strcmp(alaki,"kala2")==0 || strcmp(alaki,"kala3")==0 || 
										strcmp(alaki,"kala4")==0 || strcmp(alaki,"kala5")==0 || strcmp(alaki,"kala6")==0 ||
										strcmp(alaki,"kala7")==0 || strcmp(alaki,"kala8")==0 || strcmp(alaki,"kala9")==0 ||
										strcmp(alaki,"kala1")==0) {
											
											log >> tkala;
											tkala_jam += tkala;
						
										}
								
								
							}
					}
					log.close();	
					if (tkala_jam>=10) {
						takhfif = gheymat / 5 ;
						cout<<"Takhfife Kol= "<< takhfif * tedad_kharid <<endl;				
					}
					else if (tkala_jam>=20) {
						takhfif = gheymat * 3/10 ;
						cout<<"Takhfife Kol= "<< takhfif * tedad_kharid <<endl;
					}
					else {
						takhfif = gheymat * 1/10 ;
						cout<<"Takhfife Kol= "<< takhfif * tedad_kharid <<endl;
					}
					
					log.open("log.txt", ios::app);
					log << "kala4" << endl;                                  //injash
					log << tedad_kharid << endl;
					log << gheymat <<endl;
					log << takhfif;
					log.close();
					cout<<"Baraye Edame Kharid, Adadi Vared konid va Enter ra Bezanid"<<endl;
					cin>>adad;
					system("CLS");
					gozine3();			
				}
			}
		}
	}	
	






	if (shomare==5) {                                     //injash
		while ( !(kala.eof()) ) {
			kala>>kala_name;
			if (strcmp(kala_name,"kala5")==0) {               //injash
				kala>>gheymat; 
				kala>>mojoudi;
				if (  mojoudi==0) {
						cout<<"Moteasefane Kala Mojoud Nist!"<<endl;
						cout<<"Baraye Edame Kharid, Adadi Vared konid va Enter ra Bezanid"<<endl;
						cin>>adad;
						system("CLS");
						gozine3();
						
					}
				else {
					cout<<"Gheymate Kala= "<<gheymat<<endl;			
					cout<<"Tedade Kharid ra Vared Konid:"<<endl;
					cin>>tedad_kharid;
					cout<<"Gheymate Kol= "<<gheymat * tedad_kharid<<endl;
					kala.close();
					log.open("log.txt", ios::in);
					while (  !(log.eof())  ) {
						log >> user_check;
							if (strcmp(user_check, username)==0) {
								log >> alaki;
								
								if (   strcmp(alaki,"kala1")==0 || strcmp(alaki,"kala2")==0 || strcmp(alaki,"kala3")==0 || 
										strcmp(alaki,"kala4")==0 || strcmp(alaki,"kala5")==0 || strcmp(alaki,"kala6")==0 ||
										strcmp(alaki,"kala7")==0 || strcmp(alaki,"kala8")==0 || strcmp(alaki,"kala9")==0 ||
										strcmp(alaki,"kala1")==0) {
											
											log >> tkala;
											tkala_jam += tkala;
						
										}
								
								
							}
					}
					log.close();	
					if (tkala_jam>=10) {
						takhfif = gheymat / 5 ;
						cout<<"Takhfife Kol= "<< takhfif * tedad_kharid <<endl;				
					}
					else if (tkala_jam>=20) {
						takhfif = gheymat * 3/10 ;
						cout<<"Takhfife Kol= "<< takhfif * tedad_kharid <<endl;
					}
					else {
						takhfif = gheymat * 1/10 ;
						cout<<"Takhfife Kol= "<< takhfif * tedad_kharid <<endl;
					}
					
					log.open("log.txt", ios::app);
					log << "kala5" << endl;                                  //injash
					log << tedad_kharid << endl;
					log << gheymat <<endl;
					log << takhfif;
					log.close();
					cout<<"Baraye Edame Kharid, Adadi Vared konid va Enter ra Bezanid"<<endl;
					cin>>adad;
					system("CLS");
					gozine3();			
				}
			}
		}
	}






	if (shomare==6) {                                     //injash
		while ( !(kala.eof()) ) {
			kala>>kala_name;
			if (strcmp(kala_name,"kala6")==0) {               //injash
				kala>>gheymat; 
				kala>>mojoudi;
				if (  mojoudi==0) {
						cout<<"Moteasefane Kala Mojoud Nist!"<<endl;
						cout<<"Baraye Edame Kharid, Adadi Vared konid va Enter ra Bezanid"<<endl;
						cin>>adad;
						system("CLS");
						gozine3();
						
					}
				else {
					cout<<"Gheymate Kala= "<<gheymat<<endl;			
					cout<<"Tedade Kharid ra Vared Konid:"<<endl;
					cin>>tedad_kharid;
					cout<<"Gheymate Kol= "<<gheymat * tedad_kharid<<endl;
					kala.close();
					log.open("log.txt", ios::in);
					while (  !(log.eof())  ) {
						log >> user_check;
							if (strcmp(user_check, username)==0) {
								log >> alaki;
								
								if (   strcmp(alaki,"kala1")==0 || strcmp(alaki,"kala2")==0 || strcmp(alaki,"kala3")==0 || 
										strcmp(alaki,"kala4")==0 || strcmp(alaki,"kala5")==0 || strcmp(alaki,"kala6")==0 ||
										strcmp(alaki,"kala7")==0 || strcmp(alaki,"kala8")==0 || strcmp(alaki,"kala9")==0 ||
										strcmp(alaki,"kala1")==0) {
											
											log >> tkala;
											tkala_jam += tkala;
						
										}
								
								
							}
					}
					log.close();	
					if (tkala_jam>=10) {
						takhfif = gheymat / 5 ;
						cout<<"Takhfife Kol= "<< takhfif * tedad_kharid <<endl;				
					}
					else if (tkala_jam>=20) {
						takhfif = gheymat * 3/10 ;
						cout<<"Takhfife Kol= "<< takhfif * tedad_kharid <<endl;
					}
					else {
						takhfif = gheymat * 1/10 ;
						cout<<"Takhfife Kol= "<< takhfif * tedad_kharid <<endl;
					}
					
					log.open("log.txt", ios::app);
					log << "kala6" << endl;                                  //injash
					log << tedad_kharid << endl;
					log << gheymat <<endl;
					log << takhfif;
					log.close();
					cout<<"Baraye Edame Kharid, Adadi Vared konid va Enter ra Bezanid"<<endl;
					cin>>adad;
					system("CLS");
					gozine3();			
				}
			}
		}
	}

	
	
	
	
	
	
	
	if (shomare==7) {                                     //injash
		while ( !(kala.eof()) ) {
			kala>>kala_name;
			if (strcmp(kala_name,"kala7")==0) {               //injash
				kala>>gheymat; 
				kala>>mojoudi;
				if (  mojoudi==0) {
						cout<<"Moteasefane Kala Mojoud Nist!"<<endl;
						cout<<"Baraye Edame Kharid, Adadi Vared konid va Enter ra Bezanid"<<endl;
						cin>>adad;
						system("CLS");
						gozine3();
						
					}
				else {
					cout<<"Gheymate Kala= "<<gheymat<<endl;			
					cout<<"Tedade Kharid ra Vared Konid:"<<endl;
					cin>>tedad_kharid;
					cout<<"Gheymate Kol= "<<gheymat * tedad_kharid<<endl;
					kala.close();
					log.open("log.txt", ios::in);
					while (  !(log.eof())  ) {
						log >> user_check;
							if (strcmp(user_check, username)==0) {
								log >> alaki;
								
								if (   strcmp(alaki,"kala1")==0 || strcmp(alaki,"kala2")==0 || strcmp(alaki,"kala3")==0 || 
										strcmp(alaki,"kala4")==0 || strcmp(alaki,"kala5")==0 || strcmp(alaki,"kala6")==0 ||
										strcmp(alaki,"kala7")==0 || strcmp(alaki,"kala8")==0 || strcmp(alaki,"kala9")==0 ||
										strcmp(alaki,"kala1")==0) {
											
											log >> tkala;
											tkala_jam += tkala;
						
										}
								
								
							}
					}
					log.close();	
					if (tkala_jam>=10) {
						takhfif = gheymat / 5 ;
						cout<<"Takhfife Kol= "<< takhfif * tedad_kharid <<endl;				
					}
					else if (tkala_jam>=20) {
						takhfif = gheymat * 3/10 ;
						cout<<"Takhfife Kol= "<< takhfif * tedad_kharid <<endl;
					}
					else {
						takhfif = gheymat * 1/10 ;
						cout<<"Takhfife Kol= "<< takhfif * tedad_kharid <<endl;
					}
					
					log.open("log.txt", ios::app);
					log << "kala7" << endl;                                  //injash
					log << tedad_kharid << endl;
					log << gheymat <<endl;
					log << takhfif;
					log.close();
					cout<<"Baraye Edame Kharid, Adadi Vared konid va Enter ra Bezanid"<<endl;
					cin>>adad;
					system("CLS");
					gozine3();			
				}
			}
		}
	}	
	








	if (shomare==8) {                                     //injash
		while ( !(kala.eof()) ) {
			kala>>kala_name;
			if (strcmp(kala_name,"kala8")==0) {               //injash
				kala>>gheymat; 
				kala>>mojoudi;
				if (  mojoudi==0) {
						cout<<"Moteasefane Kala Mojoud Nist!"<<endl;
						cout<<"Baraye Edame Kharid, Adadi Vared konid va Enter ra Bezanid"<<endl;
						cin>>adad;
						system("CLS");
						gozine3();
						
					}
				else {
					cout<<"Gheymate Kala= "<<gheymat<<endl;			
					cout<<"Tedade Kharid ra Vared Konid:"<<endl;
					cin>>tedad_kharid;
					cout<<"Gheymate Kol= "<<gheymat * tedad_kharid<<endl;
					kala.close();
					log.open("log.txt", ios::in);
					while (  !(log.eof())  ) {
						log >> user_check;
							if (strcmp(user_check, username)==0) {
								log >> alaki;
								
								if (   strcmp(alaki,"kala1")==0 || strcmp(alaki,"kala2")==0 || strcmp(alaki,"kala3")==0 || 
										strcmp(alaki,"kala4")==0 || strcmp(alaki,"kala5")==0 || strcmp(alaki,"kala6")==0 ||
										strcmp(alaki,"kala7")==0 || strcmp(alaki,"kala8")==0 || strcmp(alaki,"kala9")==0 ||
										strcmp(alaki,"kala1")==0) {
											
											log >> tkala;
											tkala_jam += tkala;
						
										}
								
								
							}
					}
					log.close();	
					if (tkala_jam>=10) {
						takhfif = gheymat / 5 ;
						cout<<"Takhfife Kol= "<< takhfif * tedad_kharid <<endl;				
					}
					else if (tkala_jam>=20) {
						takhfif = gheymat * 3/10 ;
						cout<<"Takhfife Kol= "<< takhfif * tedad_kharid <<endl;
					}
					else {
						takhfif = gheymat * 1/10 ;
						cout<<"Takhfife Kol= "<< takhfif * tedad_kharid <<endl;
					}
					
					log.open("log.txt", ios::app);
					log << "kala8" << endl;                                  //injash
					log << tedad_kharid << endl;
					log << gheymat <<endl;
					log << takhfif;
					log.close();
					cout<<"Baraye Edame Kharid, Adadi Vared konid va Enter ra Bezanid"<<endl;
					cin>>adad;
					system("CLS");
					gozine3();			
				}
			}
		}
	}








	if (shomare==9) {                                     //injash
		while ( !(kala.eof()) ) {
			kala>>kala_name;
			if (strcmp(kala_name,"kala9")==0) {               //injash
				kala>>gheymat; 
				kala>>mojoudi;
				if (  mojoudi==0) {
						cout<<"Moteasefane Kala Mojoud Nist!"<<endl;
						cout<<"Baraye Edame Kharid, Adadi Vared konid va Enter ra Bezanid"<<endl;
						cin>>adad;
						system("CLS");
						gozine3();
						
					}
				else {
					cout<<"Gheymate Kala= "<<gheymat<<endl;			
					cout<<"Tedade Kharid ra Vared Konid:"<<endl;
					cin>>tedad_kharid;
					cout<<"Gheymate Kol= "<<gheymat * tedad_kharid<<endl;
					kala.close();
					log.open("log.txt", ios::in);
					while (  !(log.eof())  ) {
						log >> user_check;
							if (strcmp(user_check, username)==0) {
								log >> alaki;
								
								if (   strcmp(alaki,"kala1")==0 || strcmp(alaki,"kala2")==0 || strcmp(alaki,"kala3")==0 || 
										strcmp(alaki,"kala4")==0 || strcmp(alaki,"kala5")==0 || strcmp(alaki,"kala6")==0 ||
										strcmp(alaki,"kala7")==0 || strcmp(alaki,"kala8")==0 || strcmp(alaki,"kala9")==0 ||
										strcmp(alaki,"kala1")==0) {
											
											log >> tkala;
											tkala_jam += tkala;
						
										}
								
								
							}
					}
					log.close();	
					if (tkala_jam>=10) {
						takhfif = gheymat / 5 ;
						cout<<"Takhfife Kol= "<< takhfif * tedad_kharid <<endl;				
					}
					else if (tkala_jam>=20) {
						takhfif = gheymat * 3/10 ;
						cout<<"Takhfife Kol= "<< takhfif * tedad_kharid <<endl;
					}
					else {
						takhfif = gheymat * 1/10 ;
						cout<<"Takhfife Kol= "<< takhfif * tedad_kharid <<endl;
					}
					
					log.open("log.txt", ios::app);
					log << "kala9" << endl;                                  //injash
					log << tedad_kharid << endl;
					log << gheymat <<endl;
					log << takhfif;
					log.close();
					cout<<"Baraye Edame Kharid, Adadi Vared konid va Enter ra Bezanid"<<endl;
					cin>>adad;
					system("CLS");
					gozine3();			
				}
			}
		}
	}


}		
		
main ()
{
menu ();
	
}
