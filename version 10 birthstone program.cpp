
//*******************************
//Team Sia (Walker and Strauss)
//Birthstone Program
//Version 10
//Program to give Birthstone








#include <iostream>
#include <string> //libraries we used
using namespace std;

int main()



{ //start
    int month, day;
    char ans, space;
    string text; //defined variables for the expected input

      do
    {
       cout << "Hi! Would you like to know your birthstone? Please enter your name so we can get to know you better \n";
        getline(cin, text);//error to fix hyphenated last name
        cout << "Nice to meet you " << text << "! Now please enter your birthday using a two digit month and two digit year, for example if you were born on July 31st you would enter 07/31 \n";
         cout<<"enter month:";
        cin>>month;
        cout<<"enter day:";
	cin>>day;
        if((month == 3 && day >= 1)||(month==3 && day <= 31)) //the following are else if statements so the program can intuit the dates given and give the user the proper results
           {
              cout << text << " Your birthstone is Aquamarine! These and the bloodstone are all associated with good health. They are also connected with youth, love and hope. Wearing this gem may give new spark to married love, build your courage and improve  your overall happiness \n"; //These statements at the end of the outputted text connect to the loop statement at the end so the code can be repeated
           }
        else if((month == 4 && day >= 1)||(month==4 && day <= 31))
           {
              cout << text << " Your birthstone is a diamond! Famously known as a girls best friend. Diamonds come in several colours. They share associations with eternal love and invincibility. It was also once thought that they could ward off insanity. \n";
           }
        else if((month == 5 && day >= 1)||(month==5 && day <= 31))
           {
              cout << text << " Your birthstone is the emerald! These gorgeous green stones speak of health, faithfulness, fertility and improved eyesight \n";
           }
        else if((month == 6 && day >= 1)||(month==6 && day <= 30))
           {
              cout << text << " Your birthstone is the pearl! These stones suggest chastity, modesty and stable marriage relationships. These gems are available in sophisticated black, grey, chocolate and the familiar creamy-white colours \n";
           }
        else if((month == 7 && day >= 1)||(month==7 && day <= 31))
           {
              cout << text << " Your birthstone is the ruby! These gem stones are tokens of harmony and peace. Their beauty speaks of strength and nobility of character. Wearers may attract both good luck and good friends \n";
           }
        else if((month == 8&& day >= 1)||(month==8 && day <= 31))
           {
              cout << text << " Your birthstone is the light green peridot! Peridot has its own charming sparkle. Tradition says you will be able to successfully ward off evil, enchantments and depression if you wear or carry peridot \n";
           }
        else if((month == 9&& day >= 1)||(month==9 && day <= 1))
           {
              cout << text << " Your birthstone is the sapphire! These stones come in a variety of interesting colours as well as the  more common blue shades. They are associated with dignity, loyalty, serenity, faith, wisdom and purity \n";
           }
        else if((month == 10&& day >= 1)||(month==10 && day <= 31))
           {
              cout << text << " Your birthstone is the opal! These exotic stones along with tourmaline are linked with hope, innocence and creativity. They also protect the wearer from bad or mal-intended people \n";
           }
        else if((month == 11&& day >= 1)||(month==11 && day <= 31))
           {
              cout << text << " Your birthstone is yellow topaz! Yellow topaz is associated with strength and healing for both body and mind. It offers protection to travellers and supports good mental health \n";
           }
        else if((month == 12&& day >= 1)||(month==12 && day <= 31))
           {
              cout << text << " Your birthstone is turquoise, blue topaz and tanzanite! These stones are linked with a happy life that will be filled with  good fortunes. The stones could also prevent or cure headaches. In ancient times, people believed that turquoise would  change colour when the wearer was not well or in danger \n";
           }
        else if((month == 1&& day >= 1)||(month==1 && day <= 31))
           {
              cout << text << " Your birthstone is garnet! It has been said that garnet could help to prevent snake bites and nightmares. It could also provide directional guidance in the darkness. If you wear the stone, you could see an increase in your self image, will power and energy levels. It could also help nervous people feel more relaxed. Faith, love and constancy are all attributed to Garnet  \n";
           }
        else if((month == 2&& day >= 1)||(month==2 && day <= 28))
           {
              cout << text << " Your birthstone is Purple Amethyst! This stone is associated with peace. temperance, serenity and royalty. If you wear the stone you could be protected from the darkness. The Pope has always been known to  wear an amethyst ring \n";
           }
             else
           cout << text << "Oh no! It looks like your information wasn't processed correctly. \n";
        cout << "Would You like to Find Another Birthstone? (Please Type Y)\n ";
        cin >> ans;
        cin.ignore();
        ans = toupper(ans);
    }
 while(ans == 'Y'); //This is a loop statement so the program can repeat its code as much as the user wants
     cout << " Thanks! If you love your birthstone go to https://www.etsy.com/market/birthstone_jewelry to adorn yourself!  \n";
     return 0;
} //end

