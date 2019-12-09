//Kori Reine
//Role Playing Game
//Final Project
//12.9.19

//based on the Futurama episode T: The Terrestrial

#include <iostream>
#include <stdlib.h> //exit function

using namespace std;

const int FRY = 1;
const int BENDER = 2;
const int LEELA = 3;

//displaying introduction
void displayIntro();
//get character choice
int getUserChoice();
//fry path
void fryPath();
//bender path
void benderPath();
//leela path
void leelaPath();
//get through blockade
int blockade();
//blockade choice 1
void blockadeChoice1();
//blockade choice 2
void blockadeChoice2();
//fry caught
int fryCaught();
//bender caught
int benderCaught();
//leela caught
int leelaCaught();
//jrrr
int jrrrMeet();
//lrrr
int lrrrMeet();
//drrr
int drrrMeet();
//goodbye
int goodbye();
//leela returning to earth
void leelaEarth();
//when bender chooses to leave fry on the planet
int benderLeavesFry ();
//when bender chooses to search for fry on the planet
int benderSearches();
//bender on earth - questioned about fry
int benderEarth();


int main() {

    //first display the introduction to this
    displayIntro();

    system("pause");

    int characterChoice;
    characterChoice = getUserChoice();
    
    if (characterChoice == FRY) {
        cout << "You have chosen Fry.\n";
    }
    else if (characterChoice == BENDER) {
        cout << "You have chosen Bender.\n";
    }
    else if (characterChoice == LEELA) {
        cout << "You have chosen Leela.\n";
    }

    //this makes it all go easily!!! one quick way to access each path
    switch (characterChoice) {
        case 1: 
        fryPath();
        break;
        case 2:
        benderPath();
        break;
        case 3:
        leelaPath();
        break;
    }
    

cout << "Thanks for playing the T. Terrestial game!\n";

}

//display introduction
void displayIntro()
{
    cout << "Lrrr, the ruler of the planet Omicron Persei 8, and his son Jrrr invade planet earth and kill the head of Agnew.\n";
    cout << "The preserved head of President Nixon is furious, and he declares an embargo against the planet.\n";
    cout << "The Professor sends the Planet Express crew to Omicron Persei 8 in secret despite the embargo\n";
    cout << "to get the 'sacred weed of Omicron' for his arthritis flare-up.\n\n";
    cout << "----------------------------------------------------------------------------------------------------------------\n\n";
}

int getUserChoice () {

int cChoice;
cout << "Choose which character you would like to be: \n";
cout << "1. Fry\n";
cout << "2. Bender\n";
cout << "3. Leela\n";
cin >> cChoice;

//HERES MY STANDARD INVALID INPUT FORMAT FOR EACH SET OF QUESTIONS
if (cChoice > 3)
    {
        do 
        {
            cout << "Invalid input. Please pick between 1 and 3.\n";
            cin >> cChoice;
        }
        while (cChoice > 3);
    }

return cChoice;

}

//fry path
//----------------------------------------------------------------
void fryPath() //no return value
{
int blockadeChoice = blockade();
if (blockadeChoice == 1) {
    blockadeChoice1();
    exit(0);
}
else {
    blockadeChoice2();
}

cout << "You get off the ship, and Hermes pairs you with Bender for the buddy system.\n";
cout << "You and Bender wander in the woods looking for the sacred weed to pick.\n\n";

//omicronians approaching
int caughtResponse = fryCaught();
//because i need the plot to be around fry, all answers will make him stay
//cout << "1. Run to the ship!\n";
// cout << "2. Look for Bender!\n";
//cout << "3. Pick some more\n";
switch (caughtResponse) {
    case 1:
    cout << "You tried but could not find where the ship was.\n";
    break;
    case 2:
    cout << "You couldn't find him!\n";
    break;
    case 3:
    cout << "You pick some more of the sacred weed.\n";
    break;
}
system("pause");

//UNIVERSAL FRY PATH - he HAS to stay on the planet.
cout << "You look up and see the Planet Express ship flying away!\n\n";

cout << "You see a trail of what looks like M&Ms and follow it, eating it.\n";

int meetingJrr = jrrrMeet();
if (meetingJrr == 1) {
    cout << "You scream loudly and wake Lrrr, the ruler of Omicron Persei 8!\n";
    cout << "He fleams you on the spot! You die.\n";
    exit(0);
}
else {
    cout << "Jrrr says 'Hello little guy' and reveals the M&Ms are his turds!\n";
    cout << "You find out he is the son of Lrrr, the ruler of Omicron Persei 8.\n";
    cout << "He takes you into his room to hide you from his father.\n";
}

system ("pause");

int lrrrResponse = lrrrMeet();

cout <<" /n";
/*
cout << "1. The closet with his skull collection.\n";
    cout << "2. No hiding! Greet him and introduce yourself.\n";
    cout << "3. Under the foos ball table.\n";
*/

switch (lrrrResponse) {
    case 1:
    cout << "Lrrr searches the room and look under the foos ball table first.\n";
    cout << "He then goes to the closet and spots you!\n";
    cout << "He grabs you and asks, 'Why haven't you fleamed this skull yet, Jrrr?'\n";
    cout << "You squeal and he sees you're alive!\n";
    break;
    case 2:
    cout << "You introduce yourself, scaring him! He zaps you with his ray gun!\n";
    cout << "You disintegrate and turn to dust. Jrrr cries over you.\n";
    exit(0);
    break;
    case 3:
    cout << "Lrrr searches the closet first and only finds fleamed skulls.\n";
    cout << "As he turns around, he spots you under the table and grabs you!\n";
    break;
    
}
//this is a lot of text but i just need it for the plot
cout << "Jrrr explains that you are his pet and he loves you!\n";
cout << "He begs Lrrr to let him keep you.\n\n";

cout << "But Lrrr commands Jrrr to kill you! Jrrr instead escapes with you on a bicycle powered by love.\n";
cout << "He takes you to the doctor, Drrr, because you have fallen ill.\n";
cout << "Jrrr had been drinking your blood, not knowing it was bad for you.\n";

int drrrResponse;
drrrResponse = drrrMeet();
/*
cout << "1. Euthanasia\n";
cout << "2. Sacred weed treatment.\n";
*/

if (drrrResponse == 1) {
    cout << "Drrr euthanizes you.\n";
    exit(0);
}
else {
    cout << "Drrr gives you the sacred weed and you begin to feel better.\n";
}

cout << "Bender crashes into the building to rescue you!\n";

int goodbyeResponse;
goodbyeResponse = goodbye();

/*
cout << "1. I love you, Jrr, and good-bye.\n";
cout << "2. You good-for-nothing alien! I'm glad I'm leaving you!\n";
cout << "3. I was happy to be your pet. These were some of the best days of my life\n";
*/

switch (goodbyeResponse) {
    case 1:
    cout << "He gives you a hug and says he loves you too. You go with Bender.\n";
    cout << "You make it safely back to Earth.\n";
    break;
    case 2:
    cout << "Jrrr is a young Omicronian with a temper! He fleams you!\n";
    exit(0);
    break;
    case 3:
    cout << "He gives you a hug and says he will never forget you.\n";
    cout << "You go in the ship with Bender and make it back to Earth safely.\n";
    break;
}

cout << "You survived your trip to Omicron Persei 8! Congratulations!\n";

}
//END OF FRY PATH
//----------------------------------------------------------------------



//bender path
//----------------------------------------------------
void benderPath()
{
    //how to get through blockade
int blockadeChoice = blockade();
if (blockadeChoice == 1) {
    blockadeChoice1();
    exit(0);
}
else {
    blockadeChoice2();
}

cout << "You get off the ship, and Hermes pairs you with Fry for the buddy system.\n";
cout << "You both go wandering in the woods to pick the sacred weed, but you lose Fry.\n\n";

//omicronians approaching

int caughtResponse = benderCaught();
/*
cout << "1. Leave him behind - who cares about humans?\n";
cout << "2. Wait and search for him\n";
*/
switch (caughtResponse) {
    case 1: 
        int benderLeavesF;
        benderLeavesF = benderLeavesFry();

        /*
        cout << "1. Oh he's in the bathroom!\n";
        cout << "2. He's in the captain's quarters!\n";
        cout << "3. I left him behind.
        */
            switch (benderLeavesF)
            {
                case 1:
                cout << "They believe you, and you return to Earth.\n";
                break;
                case 2:
                cout << "They believe you, and you return to Earth.\n";
                break;
                case 3:
                cout << "Leela (the ship pilot) refuses to take off! You try to find Fry, but you are caught\n";
                cout << "by the Omicronians! They have mercy and turn you over to Zap. You are arrested.\n";
                cout << "Mission failed.\n";
                exit(0);
                break;
            }


    break;
    case 2:
        int benderSearch;
        benderSearch = benderSearches();

        /*
        cout << "1. Cry and feel sorry for yourself.\n";
        cout << "2. Look around for a space ship to steal.\n";
        cout << "3. Find the Omicronians and beg for mercy.\n\n";
        */
            switch (benderSearch)
            {
                case 1:
                cout << "The Omicronians find you. They don't kill you because you aren't human, but they\n";
                cout << "turn you over to Zap. You are arrested. Mission failed.\n";
                exit(0);
                break;
                case 2:
                cout << "You find an Omicronian ship and steal it! You make it back to Earth.\n";
                break;
                case 3:
                cout << "You find Jrrr, a young Omicronian, and he gives you a space ship. You return to Earth safely.\n";
                break;
            }

    break;

}

int benderbackonEarth;

/*
cout << "1. He's out on a delivery working overtime!\n";
    cout << "2. I left him on Oicron Persei 8.\n";
    cout << "3. He's being a lazy bum at home.\n";
*/

benderbackonEarth = benderEarth();

switch (benderbackonEarth) {
    case 1: 
    cout << "They believe you and give Fry an award for his extra hard work.\n";
    break;
    cout << "Leela is furious! She forces you to go back to Omicron Persei 8 to rescue him.\n";
    break;
    cout << "The Professor fires Fry.\n";
    break;
}

cout << "You take the Planet Express ship and return to Persei 8 to get Fry.\n";
cout << "You and Fry return safely to planet Earth.\n";

}
//end of BENDER PATH
//------------------------------------------------------


//leela path
//--------------------------------------------------------
void leelaPath()
{
int blockadeChoice = blockade();
if (blockadeChoice == 1) {
    blockadeChoice1();
    
}
else {
    blockadeChoice2();
}

cout << "You get off the ship, and Hermes pairs you with Amy for the buddy system.\n";
cout << "You both wander in the woods to pick the sacred weed.\n\n";

//omicronians approaching
int caughtResponse = leelaCaught();

/*
cout << "1. Hurry up and pick more!\n";
cout << "2. Run to the ship and fly away!\n";
cout << "3. Make sure everyone gets in the ship.\n";
*/

switch (caughtResponse) {
    case 1: 
    cout << "You stuff some more in your bag and make it just in time to escape the Omicronians!\n";
    cout << "You have no time to check and be sure everyone got on the ship.\n";
    cout << "You return to Earth.\n";
    system("pause");
    leelaEarth();
    break;
    case 2: 
    cout << "You make it back to the ship just in time to avoid the Omicronians!\n";
    cout << "You're in such a hurry that you forget to check if everyone's on board!\n";
    cout << "You return to Earth safely.\n";
    system ("pause");
    leelaEarth();
    break;
    case 3:
    cout << "You ask everyone where their buddy is. You don't see Fry, so you ask Bender if he is still with him\n";
    cout << "because they were paired together. Bender says Fry is in the bathroom.\n";
    cout << "Do you believe him?\n";
    cout << "1. Yes, and fly away.\n";
    cout << "2. No, search for him in the ship.\n";
    int answerHere;
    cin >> answerHere;

    if (answerHere > 2)
    {
        do 
        {
            cout << "Invalid input. Please pick between 1 and 2.\n";
            cin >> answerHere;
        }
        while (answerHere > 2);
    }

    if (answerHere == 1) {
        cout << "You make it back safely to Earth.\n";
        system ("pause");
        //calls on the function where leela goes back to earth
        leelaEarth();
    }
    else if (answerHere == 2) {
        cout << "You search for Fry and can't find him! The Omicronians caught you!\n";
        cout << "They have mercy and instead of eating you, they turn you over to Zapp.\n";
        cout << "You are arrested and jailed.\n";
       exit(0);
    }
    break;
    

}


}

//---------------------------------------------------
//END OF LEELA PATH

int blockade() 
{
    int blockadeChoice;
    cout << "Once you reach Omicron Persei 8, you see that Zap Brannigan's fleet is surrounding the planet!\n";
    cout << "How do you get through?\n";
    cout << "1. Try to fly right through it!\n";
    cout << "2. Spray paint 'Omicronian Express' on the ship\n";
    cin >> blockadeChoice;

     if (blockadeChoice > 2)
    {
        do 
        {
            cout << "Invalid input. Please pick between 1 and 2.\n";
            cin >> blockadeChoice;
        }
        while (blockadeChoice > 2);
    }

    if (blockadeChoice == 1) {
        cout << "You chose: Try to fly right through it!\n";
    }
    else if (blockadeChoice == 2) {
        cout << "You chose: Spray paint 'Omicronian Express' on the ship\n";
    }
    
    return blockadeChoice;

}

void blockadeChoice1 () 
{
    cout << "Zap stopped the ship! You were arrested. Mission failed.\n";
    
}

void blockadeChoice2 ()
{
    cout << "You fooled Zap! You successfully land on Omicron Persei 8 to\n";
    cout << "pick the 'sacred weed' for the Professor's arthritis.\n";
}



//fry caught
int fryCaught()
{
    int caughtResponse;
    cout << "The Omicronians are coming! What do you do?\n";
    cout << "1. Run to the ship!\n";
    cout << "2. Look for Bender!\n";
    cout << "3. Pick some more.\n";
    cin >> caughtResponse;
    
    if (caughtResponse > 3)
    {
        do 
        {
            cout << "Invalid input. Please pick between 1 and 3.\n";
            cin >> caughtResponse;
        }
        while (caughtResponse > 3);
    }

    string fryCaughtResponse;

    if (caughtResponse == 1)
    {
        fryCaughtResponse = "Run to the ship!";
    }
    else if (caughtResponse == 2)
    {
        fryCaughtResponse = "Look for Bender!";
    }
    else if (caughtResponse == 3)
    {
        fryCaughtResponse = "Pick some more.";
    }

    cout << "You chose: " << fryCaughtResponse << endl;
    return caughtResponse;
}

//bender caught
int benderCaught()
{
    int caughtResponse;
    cout << "The Omicronians are coming! You can't find Fry. What do you do?\n";
    cout << "1. Leave him behind - who cares about humans?\n";
    cout << "2. Wait and search for him.\n";
    cin >> caughtResponse;

    if (caughtResponse > 2)
    {
        do 
        {
            cout << "Invalid input. Please pick between 1 and 2.\n";
            cin >> caughtResponse;
        }
        while (caughtResponse > 2);
    }
    
    string benderCaughtString;

    if (caughtResponse == 1)
    {
        benderCaughtString = "Leave him behind - who cares about humans?";
    }
    else if (caughtResponse == 2)
    {
        benderCaughtString = "Wait and search for him.";
    }

    cout << "You chose: " << benderCaughtString << endl;
    return caughtResponse;
}

//leela caught
int leelaCaught()
{
    int caughtResponse;
    cout << "The Omicronians are coming! What do you do?\n";
    cout << "1. Hurry up and pick more!\n";
    cout << "2. Run to the ship and fly away!\n";
    cout << "3. Make sure everyone gets in the ship.\n";
    cin >> caughtResponse;

//for invalid input
    if (caughtResponse > 3)
    {
        do 
        {
            cout << "Invalid input. Please pick between 1 and 3.\n";
            cin >> caughtResponse;
        }
        while (caughtResponse > 3);
    }

    //fill in caught responses

    if (caughtResponse == 1) 
    {
        cout << "You chose: Hurry up and pick more!\n\n";
    }
    else if (caughtResponse == 2)
    {
        cout << "You chose: Run to the ship and fly away!\n\n";
    }
    else if (caughtResponse == 3)
    {
        cout << "You chose: Make sure everyone gets in the ship.\n\n";
    }
    
    return caughtResponse;
}

int jrrrMeet() 
{
cout << "You spot a young Omicronian! What do you do?\n";
cout << "1. Scream!!!\n";
cout << "2. Quietly walk up to him and say hello.\n";
int jrrrRresponse;
cin >> jrrrRresponse;

//for invalid input
    if (jrrrRresponse > 2)
    {
        do 
        {
            cout << "Invalid input. Please pick between 1 and 2.\n";
            cin >> jrrrRresponse;
        }
        while (jrrrRresponse > 2);
    }

string jrrrString;

if (jrrrRresponse == 1) 
{
    jrrrString = "Scream!!!";
}
else if (jrrrRresponse == 2) {
    jrrrString = "Quietly walk up to him and say hello.";
}

cout << "You chose: " << jrrrString << endl;
return jrrrRresponse;

}

int lrrrMeet() 
{
   int lrrrResponse;
    cout << "Lrrr comes in Jrrr's room because he hears you both playing foos ball.\n";
    cout << "Where do you hide?\n";
    cout << "1. The closet with his skull collection.\n";
    cout << "2. No hiding! Greet him and introduce yourself.\n";
    cout << "3. Under the foos ball table.\n";
    cin >> lrrrResponse;

    //for invalid input
    if (lrrrResponse > 3)
    {
        do 
        {
            cout << "Invalid input. Please pick between 1 and 3.\n";
            cin >> lrrrResponse;
        }
        while (lrrrResponse > 3);
    }

    string lrrrString;
    if (lrrrResponse == 1)
    {
        lrrrString = "The closet with his skull collection.";
    }
    else if (lrrrResponse == 2)
    {
        lrrrString = "No hiding! Greet him and introduce yourself.";
    }
    else 
    {
        lrrrString = "Under the foos ball table.";
    }

    cout << "You chose: " << lrrrString << endl;
    return lrrrResponse;
}

int drrrMeet()
{
    int drrrAnswer;
    cout << "Drrr suggests two remedies.\n";
    cout << "Which do you choose?\n";
    cout << "1. Euthanasia\n";
    cout << "2. Sacred weed treatment.\n";
    cin >> drrrAnswer;

     //for invalid input
    if (drrrAnswer > 2)
    {
        do 
        {
            cout << "Invalid input. Please pick between 1 and 2.\n";
            cin >>drrrAnswer;
        }
        while (drrrAnswer > 2);
    }

    string drrrString;

    if (drrrAnswer == 1)
    {
        drrrString = "Euthanasia";
    }
    else if (drrrAnswer == 2)
    {
        drrrString = "Sacred weed treatment.";
    }

    cout << "You chose: " << drrrString << endl;
    return drrrAnswer;

}

int goodbye()
{
    cout << "You must leave Jrrr and return to Earth.\n";
    cout << "What do you say to him?\n";
    cout << "1. I love you, Jrr, and good-bye.\n";
    cout << "2. You good-for-nothing alien! I'm glad I'm leaving you!\n";
    cout << "3. I was happy to be your pet. These were some of the best days of my life.\n";
    int goodbyeR;
    cin >> goodbyeR;

    if (goodbyeR > 3) {
        do {
             cin >> goodbyeR;
    }
        while (goodbyeR > 3);
    }

    string goodbyeString;

    if (goodbyeR == 1) 
    {
        goodbyeString == "I love you, Jrr, and good-bye.";
    }
    else if (goodbyeR == 2)
    {
        goodbyeString = "You good-for-nothing alien! I'm glad I'm leaving you!";
    }
    else if (goodbyeR == 3)
    {
        goodbyeString = "I was happy to be your pet. These were some of the best days of my life.";
    }
    

cout << "You chose: " << goodbyeR << endl;
return goodbyeR;

}

void leelaEarth() 
{
    cout << "Back on Earth, you don't see Fry around the office anymore.\n";
    cout << "Bender tells you Fry's been working especially hard around the office.\n";
    cout << "After a week, Bender returns with Fry!\n";

}

int benderLeavesFry()
{
    cout << "You get back to the ship and Leela asks where Fry is!\n";
    cout << "What do you say?\n";
    cout << "1. Oh he's in the bathroom!\n";
    cout << "2. He's in the captain's quarters!\n";
    cout << "3. I left him behind.\n";
    int leaveFryAnswer;
    cin >> leaveFryAnswer;

    if (leaveFryAnswer > 3) {
        do {
             cout << "Invalid response. Please choose between 1 and 3.\n";
             cin >> leaveFryAnswer;
    }
        while (leaveFryAnswer > 3);
    }

        if (leaveFryAnswer == 1) {
            cout << "You chose: Oh he's in the bathroom!\n\n";
        }
        else if (leaveFryAnswer == 2) {
            cout << "You chose: He's in the captain's quarters!\n";
        }
        else if (leaveFryAnswer == 3) {
            cout << "You chose: I left him behind.\n";
        }

    return leaveFryAnswer;

}

int benderSearches() 
{
    cout << "You look around in the woods for him for him and can't find him.\n";
    cout << "You see the ship flying away. What do you do?\n";
    cout << "1. Cry and feel sorry for yourself.\n";
    cout << "2. Look around for a space ship to steal.\n";
    cout << "3. Find the Omicronians and beg for mercy.\n\n";
    int lookingResponse;
    cin >> lookingResponse;

     if (lookingResponse > 3)
    {
        do 
        {
            cout << "Invalid input. Please pick between 1 and 3.\n";
            cin >> lookingResponse;
        }
        while (lookingResponse > 3);
    }

    if (lookingResponse == 1) {
        cout << "You chose: Cry and feel sorry for yourself.\n\n";
    }
    else if (lookingResponse == 2) {
        cout << "You chose: Look around for a space ship to steal.\n\n";
    }
    else if (lookingResponse == 3) {
        cout << "You chose: Find the Omicronians and beg for mercy.\n\n";
    }
    return lookingResponse;

}

int benderEarth() 
{

    cout << "Back on Earth, around the office, they start asking where Fry is.\n";
    cout << "What do you say?\n";
    cout << "1. He's out on a delivery working overtime!\n";
    cout << "2. I left him on Omicron Persei 8.\n";
    cout << "3. He's being a lazy bum at home.\n";
    int fryQuestion;
    cin >> fryQuestion;

    if (fryQuestion > 3) {
        do {
             cout << "Invalid input. Please choose between 1 and 3.\n";
             cin >> fryQuestion;
    }
        while (fryQuestion > 3);
    }

    string fryString;

    if (fryQuestion == 1)
    {
        fryString = "He's out on a delivery working overtime!";
    }
    else if (fryQuestion == 2)
    {
        fryString = "I left him on Oicron Persei 8.";
    }
    else if (fryQuestion == 3)
    {
        fryString = "He's being a lazy bum at home.";
    }

    cout << "You chose: " << fryString << endl;
    return fryQuestion;

}

