/*

This is a C++ software to find your emotion by how you are responding to this simple question
E-mail me at saicharan.mugunthan@gmail.com to contribute.

*/

#include <iostream>

using namespace std;

string msgText;

void SentimentCheck(){
  int searchUserInput = msgText.find("bad");
  int searchUserInput1 = msgText.find("worse");
  int searchUserInput2 = msgText.find("worst");
  int searchUserInput3 = msgText.find("pathetic");
  int searchUserInput4 = msgText.find("dirty");
  int searchUserInput5 = msgText.find("harm");
  int searchUserInput6 = msgText.find("harmed");
  int searchUserInput7 = msgText.find("dirtiest");
  int searchUserInput8 = msgText.find("dreadful");
  int searchUserInput9 = msgText.find("divorced");
  int searchUserInput10 = msgText.find("fired");
  int searchUserInput11 = msgText.find("divorcing");
  int searchUserInput12 = msgText.find("robbed");
  int searchUserInput13 = msgText.find("killed");
  int searchUserInput14 = msgText.find("did not like");
  int searchUserInput15 = msgText.find("unpleasant");
  int searchUserInput16 = msgText.find("unwelcome");
  int searchUserInput17 = msgText.find("unfortunate");
  int searchUserInput18 = msgText.find("unfavourable");
  int searchUserInput19 = msgText.find("die");
  int searchUserInput20 = msgText.find("died");
  int searchUserInput21 = msgText.find("I lost");
  int searchUserInput22 = msgText.find("injured");
  int searchUserInput23 = msgText.find("we lost");
  int searchUserInput24 = msgText.find("unlucky");
  int searchUserInput25 = msgText.find("adverse");
  int searchUserInput26 = msgText.find("nasty");
  int searchUserInput27 = msgText.find("terrible");
  int searchUserInput28 = msgText.find("Bad");
  int searchUserInput29 = msgText.find("Worse");
  int searchUserInput30 = msgText.find("Worst");
  int searchUserInput31 = msgText.find("Pathetic");
  int searchUserInput32 = msgText.find("Dirty");
  int searchUserInput33 = msgText.find("Harm");
  int searchUserInput34 = msgText.find("Harmed");
  int searchUserInput35 = msgText.find("Dirtiest");
  int searchUserInput36 = msgText.find("Dreadful");
  int searchUserInput37 = msgText.find("Divorced");
  int searchUserInput38 = msgText.find("Fired");
  int searchUserInput39 = msgText.find("Divorcing");
  int searchUserInput40 = msgText.find("Robbed");
  int searchUserInput41 = msgText.find("Killed");
  int searchUserInput42 = msgText.find("Did not like");
  int searchUserInput43 = msgText.find("Unpleasant");
  int searchUserInput44 = msgText.find("Unwelcome");
  int searchUserInput45 = msgText.find("Unfortunate");
  int searchUserInput46 = msgText.find("Unfavourable");
  int searchUserInput47 = msgText.find("Die");
  int searchUserInput48 = msgText.find("Died");
  int searchUserInput49 = msgText.find("I lost");
  int searchUserInput50 = msgText.find("Injured");
  int searchUserInput51 = msgText.find("We lost");
  int searchUserInput52 = msgText.find("Unlucky");
  int searchUserInput53 = msgText.find("Adverse");
  int searchUserInput54 = msgText.find("Nasty");
  int searchUserInput55 = msgText.find("Terrible");
  int searchUserInput56 = msgText.find("no");
  int searchUserInput57 = msgText.find("No");
  int searchUserInput58 = msgText.find("Nope");
  int searchUserInput59 = msgText.find("nope");
  int searchUserInput60 = msgText.find("nah");
  int searchUserInput61 = msgText.find("Nah");  
  int searchUserInput62 = msgText.find("worrisome");
  int searchUserInput63 = msgText.find("Worrisome");
  int searchUserInput64 = msgText.find("miserable");
  int searchUserInput65 = msgText.find("Miserable");
  
  if(searchUserInput >= 0 || searchUserInput1 >= 0 || searchUserInput2 >= 0 || searchUserInput3 >= 0 || searchUserInput4 >= 0 || searchUserInput5 >= 0 || searchUserInput6 >= 0 || searchUserInput7 >= 0 || searchUserInput8 >= 0 || searchUserInput9 >= 0 || searchUserInput10 >= 0 || searchUserInput11 >= 0 || searchUserInput12 >= 0 || searchUserInput13 >= 0 || searchUserInput14 >= 0 || searchUserInput15 >= 0 || searchUserInput16 >= 0 || searchUserInput17 >= 0 || searchUserInput18 >= 0 || searchUserInput19 >= 0 || searchUserInput20 >= 0 || searchUserInput21 >= 0 || searchUserInput22 >= 0 || searchUserInput23 >= 0 || searchUserInput24 >= 0 || searchUserInput25 >= 0 || searchUserInput26 >= 0 || searchUserInput27 >= 0 || searchUserInput28 >= 0 || searchUserInput29 >= 0 || searchUserInput30 >= 0 || searchUserInput31 >= 0 || searchUserInput32 >= 0 || searchUserInput33 >= 0 || searchUserInput34 >= 0 || searchUserInput35 >= 0 || searchUserInput36 >= 0 || searchUserInput37 >= 0 || searchUserInput38 >= 0 || searchUserInput39 >= 0 || searchUserInput40 >= 0 || searchUserInput41 >= 0 || searchUserInput42 >= 0 || searchUserInput43 >= 0 || searchUserInput44 >= 0 || searchUserInput45 >= 0 || searchUserInput46 >= 0 || searchUserInput47 >= 0 || searchUserInput48 >= 0 || searchUserInput49 >= 0 || searchUserInput50 >= 0 || searchUserInput51 >= 0 || searchUserInput52 >= 0 || searchUserInput53 >= 0 || searchUserInput54 >= 0 || searchUserInput55 >= 0 || searchUserInput56 >= 0 || searchUserInput57 >= 0 || searchUserInput58 >= 0 || searchUserInput59 >= 0 || searchUserInput60 >= 0 || searchUserInput61 >= 0 || searchUserInput62 >= 0 || searchUserInput63 >= 0 || searchUserInput64 >= 0 || searchUserInput65 >= 0){
      
      cout << "You are in a bad mood"<<endl;
  
      
  }
  else{
      
      cout << "You are in a good moood"<<endl;  
      
  }
  
}


int main()
{
    
    cout<<"How are you!"<<endl;
    cin >> msgText;
    SentimentCheck();
    
    return 0;
}
