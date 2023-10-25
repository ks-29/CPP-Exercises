#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main()
{
	
	
	HANDLE col;
	col= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(col,2);
     
	int choice,totalscore,score;
	char q1, q2, q3,q4,q5,q6,q7,q8,q9,q10,q11,q12,q13,q14,q15,again; //hara ro mga variable it sa multiple choice nga question
	string myAnswer1, myAnswer2, myAnswer3, myAnswer4,myAnswer5;//hara ro mga variable it sa choose the answer in the box nga question
	string TrueOrFalse1,TrueOrFalse2,TrueOrFalse3,TrueOrFalse4,TrueOrFalse5;//hara ro mga variable it sa true or false nga question

do{


        cout<<"\n*****************************************************";
		cout<<"\n*                                                   *";
		cout<<"\n*                    Choose Quiz                    *";
		cout<<"\n*                                                   *";
		cout<<"\n*     Enter 1 for MATHEMATICS                       *";
		cout<<"\n*     Enter 2 for SCIENCE                           *";//hara ro mga subject nga pag pilian
		cout<<"\n*     Enter 3 for TEST YOUR KNOWLEDGE               *";
		cout<<"\n*     Enter 4 for FUNDAMENTALS OF PROGRAMMING QUIZ. *";
		cout<<"\n*     Enter 5 for INTRODUCTION TO COMPUTER          *";
		cout<<"\n*                                                   *";
		cout<<"\n*****************************************************";





        cout << "\nEnter your choice:";
	    cin >> choice;//yakara ga butang it imong choice nga subject





     HANDLE col;
	col= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(col,1);

	


     switch (choice)	{
	case 1:
		
		//hara do subject nga MATHEMATICS at multiple choice ra
		
		cout << "\nWELCOME TO THE QUIZ BEE!!";
	col= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(col,14);{
	
		
		cout << "\nMATHEMATICS";
		cout << "\n121 Divided by 11 is?";
		cout << "\nA. 11";
		cout << "\nB. 10";
		cout << "\nC. 19";
		cout << "\nD. 18";
		cout << "\nenter your answer:";
		cin >> q1;//yakara ga butang it sabat

		if (q1 == 'C'||q1 == 'c');
		{
			score++;
		}
}
		cout << "\nWhat is the sum of 130 + 125 + 191?";
		cout << "\nA.335";
		cout << "\nB.456";
		cout << "\nC.446";
		cout << "\nD.426";
		cout << "\nenter your answer:";
		cin >> q2;

		if (q2 == 'C'|| q2 == 'c');
		{
			score++;//pag tama ing sabat hara ro ga add it score 
		}

		cout << "\nFind the Missing Term in Multiples of 6 : 6, 12, 18, 24, _, 36, 42, _ 54, 60.?";
		cout << "\nA. 32,45";
		cout << "\nB. 30,48";
		cout << "\nC. 24,40";
		cout << "\nD. 25,49";
		cout << "\nenter your answer:";
		cin >> q3;

		if (q3 == 'B'  || q3 == 'b' );
		{
			score++;
		}
		
		cout << "\nThe Product of 131 × 0 × 300 × 4?";
		cout << "\nA. 11";
		cout << "\nB. 0";
		cout << "\nC. 46";
		cout << "\nD. 45";
		cout << "\nenter your answer:";
		cin >> q4;

		if (q4== 'B'  || q4== 'b' );
		{
			score++;
		}
		
		cout << "\nHow Many Sides are there in a Decagon?";
		cout << "\nA. 7";
		cout << "\nB. 8";
		cout << "\nC. 9";
		cout << "\nD. 10";
		cout << "\nenter your answer:";
		cin >> q5;

		if (q5== 'D' || q5== 'd');
		{
			score++;
		}
		
	cout<<"\nyour total score is: "<<score<<"/5.";//hara do score kung pila ing tama nga sabat

    break;

	case 2:
		//hara do subject nga SCIENCE at multiple choice ra
		col= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(col,1);{
	cout << "\nWELCOME TO THE QUIZ BEE!!";
}
 HANDLE col;
	col= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(col,13);	
	cout<<"\nSCIENCE";
	cout << "\nWhat did people use to tell time before clocks and watches?";
		cout << "\nA. Earth";
		cout << "\nB. Cellphones";
		cout << "\nC. Shadows";
		cout << "\nD. Clouds";
		cout << "\nenter your answer:";
		cin >> q6;
		
		if (q6== 'C'  || q6== 'c');
		{
		
			score++;
		}
		
		
		
	cout << "\nWhich of this is not a planet?";
		cout << "\nA. Venus";
		cout << "\nB. Pluto";
		cout << "\nC. Mars";
		cout << "\nD. Earth";
		cout << "\nenter your answer:";
		cin >> q7;
		
		if (q7 == 'B'  || q7 == 'b'){
			score++;
		}
		

	cout << "\n Which of this rotates to create day and night?";
		cout << "\nA. Earth";
		cout << "\nB. Moon";
		cout << "\nC. Stars";
		cout << "\nD. Sun";
		cout << "\nenter your answer:";
		cin >> q8;
		
		if (q8 == 'A'   || q8 == 'a'){
			score++;
		}
		
		cout << "\n The path an object takes as it resolves around another object in space is called";
        cout << "\nA. Earth";  
		cout << "\nB. Moon";
		cout << "\nC. Stars";
		cout << "\nD. Sun";
		cout << "\nenter your answer:";
		cin >> q9;
		
		if (q9 == 'C'   || q9 == 'c'){
			score++;
		}
		
		cout << "\nHow many planets are in the solar system?";
		cout << "\nA. 6";
		cout << "\nB. 10";
		cout << "\nC. 8";
		cout << "\nD. 11";
		cout << "\nenter your answer:";
		cin >> q10;
		
		if (q10 == 'C'   || q10 == 'c'){
			score++;
		}
		
		
	cout<<"\nyour total score is: "<<score<<"/5.";//hara do score kung pila ing tama nga sabat
		
		
       break;
       case 3:
       col= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(col,1);{
	cout << "\n WELCOME TO THE QUIZ BEE!!";
}
	//hara do subject nga TEST YOUR KNOWLEDGE at multiple choice ra
	col= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(col,14);
	   cout<<"\nTEST YOUR KNOWLEDGE";
	   
       cout<<"\nWhich of these can be consiered thinking critically?";
       cout<<"\nA.Thinking emotionally";
       cout<<"\nB.Thinking logically";
       cout<<"\nC.Think actively and be aware of potential problems in the information you encounter.";
       cout<<"\nD.None of the above";
       cout<<"\nenter your answer:";
       cin>>q11;
       
       if(q11 == 'C'  ||  q11 == 'c'){
       	score++;
       }
       
       
       
       cout<<"\nWhat is the meaning of current information?";
       cout<<"\nA.The topic is hot.";
       cout<<"\nB.It is up to date.";
       cout<<"\nC.It is complete information.";
       cout<<"\nD.None of the above.";
       cout<<"\nenter your answer:";
       cin>>q12;
       
       if(q12 == 'B'  ||   q12 == 'b'){
       	score++;
       }
      
	  
	  
	   cout<<"\nWhat is the worst thing for a critical thinker?";
       cout<<"\nA.A logical mind.";
       cout<<"\nB.An emotional mind.";
       cout<<"\nC.Reaching to conclusion too soon.";
       cout<<"\nD.None of the above.";
       cout<<"\nenter your answer:";
       cin>>q13;
       
       if(q13 == 'C'  ||   q13 == 'c'){
       	score++;
       }
	   
	   
	   
	   cout<<"\nSelect the element which is not part of the critical thinking standards?";
       cout<<"\nA.A Clarity.";
       cout<<"\nB.Relevance.";
       cout<<"\nC.Relativistic thinking.";
       cout<<"\nD.Completeness.";
       cout<<"\nenter your answer:";
       cin>>q14;
       
       if(q14 == 'C'  ||   q14 == 'c'){
       	score++;
       }
       
       
       cout<<"\n'For this entire semester, I've been playing and having fun every day. My studies are not ";
	   cout<<"\ngoing well. However, I believe I can score an A for the exam next week'.  What is the mistake that the";
	   cout<<"\n person has committed here with respect to critical thinking?";
       cout<<"\nA.Wishful thinking.";
       cout<<"\nB.Egocentrism.";
       cout<<"\nC.Self-confident thinking.";
       cout<<"\nD.Moral subjectivism.";
       cout<<"\nenter your answer:";
       cin>>q15;
       
       if(q15 == 'A'  ||   q15 == 'a'){
       	score++;
       }
	   
	   
	   
	   
	   cout<<"\nyour total score is: "<<score<<"/5.";//hara do score kung pila ing tama nga sabat
       
      break;
       default:
       cout<<"invalid input";
     
	 
 
 break;
       case 4:
      col= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(col,1);{
	cout << "\n WELCOME TO THE QUIZ BEE!!";
}
     //hara do subject nga  FUNDAMENTALS OF PROGRAMMING 
       col= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(col,4);{

        cout<<"\nDIRECTION:Choose the correct answer ";
		cout<<"in the box and type your answer in the question below.";

}

    col= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(col,11);{
		
		cout<<"\n    FUNDAMENTALS OF PROGRAMMING QUIZ"; 
		
        cout<<"\n  CHOOSE THE CORRECT ANSWER IN THE BOX."; 
        cout<<"\n***************************************";
		cout<<"\n|             int                     |";
		cout<<"\n*                           char      *";
		cout<<"\n|                                     |";
		cout<<"\n*          double                     *";
		cout<<"\n|                            Loop     |";
		cout<<"\n*     cout<<                          *";
		cout<<"\n|                                     |";
        cout<<"\n***************************************";
}
    col= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(col,1);
       cout<<"\nWhat type of data is used when using whole number?";
       cout<<"\nType your answer here: ";
       cin>>myAnswer1;//yakara ga butang it sabat
       
       if(myAnswer1 == "int" ){
       	score++;
       }
		
		
		cout<<"\nIn C++, what type of variable can store floating point numbers, with decimals?";
       cout<<"\nType your answer here: ";
       cin>>myAnswer2;
       
       if(myAnswer2 == "double" ){
       	score++;
       }


       cout<<"\nIn C++, which statement is used to display output to the console?";
       cout<<"\nType your answer here: ";
       cin>>myAnswer3;
       
       if(myAnswer3 == "cout<<" ){
       	score++;
       }
       
       
       cout<<"\nA __________ construct is used to repeat the execution of a section of a program. ";
       cout<<"\nType your answer here: ";
       cin>>myAnswer4;
       
       if(myAnswer4 == "Loop" ||  myAnswer4 == "loop"){
       	score++;
       }
       
       cout<<"\nIn C++, what type of variable can store single character?";
       cout<<"\nType your answer here: ";
       cin>>myAnswer5;
       
       if(myAnswer5 == "char" ){
       	score++;
       }

    cout<<"\nyour total score is: "<<score<<"/5";//hara do score kung pila ing tama nga sabat



break;
       case 5:
       	 //hara do subject nga  INTRODUCTION TO COMPUTER QUIZ 
		   col= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(col,4);{
       	cout<<"\nINTRODUCTION TO COMPUTER QUIZ";
}
       	col= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(col,8);{

        cout<<"\nDIRECTION:Type (TRUE) if the statement is correct, type (FLASE) if the statement wrong.";
    
    }
    	
		
	cout<<"\n-----------------------------------------------------";	
		
		
		col= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(col,9);
    cout<<"\nInternet is a worldwide network of computers.";
    cout<<"\nType your answer here: ";
	cin>>TrueOrFalse1;//yakara ga nutang it sabat
	
	if(TrueOrFalse1 == "true" || TrueOrFalse1 == "TRUE"){
       	score++;
       }
       
       
       
       cout<<"\nRAM-name the brain of the computer that does the calculation, moving, and processing of information.";
    cout<<"\nType your answer here: ";
	cin>>TrueOrFalse1;
	
	if(TrueOrFalse1 == "FALSE" || TrueOrFalse1 == "false"){
       	score++;
       }
       
       
       cout<<"\nPart of a computer that allows a user to put information into the computer is called Softwear.";
    cout<<"\nType your answer here: ";
	cin>>TrueOrFalse1;
	
	if(TrueOrFalse1 == "FALSE" || TrueOrFalse1 == "false"){
       	score++;
       }
       
       
       
       cout<<"\nCharles Babbage is the father of computer?.";
    cout<<"\nType your answer here: ";
	cin>>TrueOrFalse1;
	
	if(TrueOrFalse1 == "true" || TrueOrFalse1 == "TRUE"){
       	score++;
       }
       
       
       
        cout<<"\nSteves Jobs and Steve Wozniak is the founder of APPLE Computer?";
    cout<<"\nType your answer here: ";
	cin>>TrueOrFalse1;
	
	if(TrueOrFalse1 == "true" || TrueOrFalse1 == "TRUE"){
       	score++;
       }
    
   cout<<"\nyour total score is: "<<score<<"/5"; //yakara ga total it tama nga sabat
}
	
	
	
	

cout<<"\ntry again! y for Yes/ n for No: ";
cin>>again;//yakara ga butang kung gusto mo mag try again or indi eon
system("cls");//hara hay ro ga clear it mga question kung gin type mo ro y


cout<<"Your Total Score is: "<<score<<"/25.";//yakara ga total it tama nga sabat sa boung subject
}





while(again == 'y' || again == 'Y');//hara hay pag mag type kaw it y hay ga balik ikaw sa una


	
	
	
		return 0;
	
}
