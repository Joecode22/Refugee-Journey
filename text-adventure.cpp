#include <iostream>
#include <limits>

int main () {
  int choice = 0;
  std::cout << "Welcome to the choose your own adventure game";
  std::cout << "In today's adventure you are a war refugee who evacuated from Mykolaiv, Ukraine shortly after the battle for Mykolaiv.\n\n";

  std::cout << "You have made it to a local hospital in Moldova that is currently being used as a refugee center.\n\n";

  // Choice 1
  std::cout << "C1) : You have a choice. Get on a bus to Bucharest where your son in law will meet you or return to Mykolaiv\n";
  std::cout << "1) Bucharest\n";
  std::cout << "2) Return to Mykolaiv\n";
  while (true) {
    // Use std::cin to receive an input from the user and store it in answer1
    std::cout << "\nWrite your answer choice as a positive integer between 1 and 2\n";
    std::cin >> choice;

    // Check if the input is within the valid range
    if (choice >= 1 && choice <= 2) {
      // Scoring conditional for question 1
      switch(choice) {
        case 1:
          std::cout << "You were met by your son in law and daughter in Bucharest!\n";
          break;
        case 2:
          std::cout << "You were captured by roaving Russian patrols on the way back to Mykolaiv. They deport you deep into Russian territory, never to be heard from again.\nGame Over\n";
          break;
        default:
          std::cout << "Invalid input";
          break;
      }
      break; // Break out of the loop once a valid input is received
    } else {
      std::cout << "Invalid input. You did not enter a positive integer between 1 and 2.\n";
      // Clear the error state of cin in case of an invalid input
      std::cin.clear();
      // Ignore the rest of the current line to avoid further input issues
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
  }

  if (choice == 1) {
    // Choice 2
  std::cout << "C2) : Your son in law arranges transport to Munich. You have a choice stay close to home in Bucharest within the humanitarian assistance systems provided within Romania or continue with your family deeper into Europe\n";
  std::cout << "1) Munich\n";
  std::cout << "2) Stay in Bucharest\n";
  while (true) {
    // Use std::cin to receive an input from the user and store it in answer1
    std::cout << "\nWrite your answer choice as a positive integer between 1 and 2\n";
    std::cin >> choice;

    // Check if the input is within the valid range
    if (choice >= 1 && choice <= 2) {
      // Scoring conditional for question 1
      switch(choice) {
        case 1:
          std::cout << "You safely transit to Germany where you and your group are inprocessed by the German authorities and now find yourself residing within temporary shelter in the Munich convention center!\n";
          break;
        case 2:
          std::cout << "You decide to stay in Romania. Your family cannot live in Romania forever and are eventually forced to return home. You find yourself residing in a small apartment with 20 other refugees. Without proper medical care and with poor sanitation you eventually catch dysentery and fall ill and die\nGame Over\n";
          break;
        default:
          std::cout << "Invalid input";
          break;
      }
      break; // Break out of the loop once a valid input is received
    } else {
      std::cout << "Invalid input. You did not enter a positive integer between 1 and 2.\n";
      // Clear the error state of cin in case of an invalid input
      std::cin.clear();
      // Ignore the rest of the current line to avoid further input issues
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
  }
  }

  if (choice == 1) {
    // Choice 3
  std::cout << "C2) : Your son in law finds refuge for you and your group in the Netherlands. He rents a car and plans on transporting you and your group to a new facility in a city that his friend Paul is residing in. You have a choice. Accompany your family to the Netherlands or stay in Germany.\n";
  std::cout << "1) Netherlands\n";
  std::cout << "2) Stay in Germany\n";
  while (true) {
    // Use std::cin to receive an input from the user and store it in answer1
    std::cout << "\nWrite your answer choice as a positive integer between 1 and 2\n";
    std::cin >> choice;

    // Check if the input is within the valid range
    if (choice >= 1 && choice <= 2) {
      // Scoring conditional for question 1
      switch(choice) {
        case 1:
          std::cout << "You safely transit to the Netherlands where you find yourself temporarily residing in a holidy camp designed with German tourist in mind. It is a beautiful peaceful place in the contryside of the Netherlands and you enjoy the laid back atmosphere. Your future is uncertain but you are happy to be with family!\n";
          break;
        case 2:
          std::cout << "You decide to stay in Germany. Your family cannot live in Germany forever and are eventually forced to return home. You find yourself residing in a refugee center in northeast of Munich. You have access to healthcare and you make friends in the Refugee center. Your family can only see you a few times a year due to visa restrictions and travel costs. You are lonely but safe. The war drags on for years and you pray for peace\nGame Over\n";
          break;
        default:
          std::cout << "Invalid input";
          break;
      }
      break; // Break out of the loop once a valid input is received
    } else {
      std::cout << "Invalid input. You did not enter a positive integer between 1 and 2.\n";
      // Clear the error state of cin in case of an invalid input
      std::cin.clear();
      // Ignore the rest of the current line to avoid further input issues
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
  }
  }

  if (choice == 1) {
    // Choice 3
  std::cout << "C2) : Your son and daughter find a way for you to return to America with them. You have a choice. Do you stay in the Netherlands or travel on to America\n";
  std::cout << "1) America\n";
  std::cout << "2) Stay in the Netherlands\n";
  while (true) {
    // Use std::cin to receive an input from the user and store it in answer1
    std::cout << "\nWrite your answer choice as a positive integer between 1 and 2\n";
    std::cin >> choice;

    // Check if the input is within the valid range
    if (choice >= 1 && choice <= 2) {
      // Scoring conditional for question 1
      switch(choice) {
        case 1:
          std::cout << "You safely transit to America with your family. You live with your daughter and son in law. You are happy but miss your friends and family you left behind in Ukraine. You hope that your son in in good health as he was not allowed to leave. You are granted Humanitarian Parole for two years and then utilize a family based pathway to residency and ultimately citizenship!\nThis is the best outcome you won the game\n";
          break;
        case 2:
          std::cout << "You stay in the Neterlands. Your family cannot stay in the Netherlands forever with you so they eventually return to America. You make friends in the refugee center, obtain refugee benefits, and have limited access to healthcare. A couple years later an anti-immigration group inside the Netherlands are voted into power and your temporary protective status is recinded. You are forced to return to Ukraine even though the war rages on. Eventually you are killed in a Kaliber missile strike launched by a Russian submarine that was targeting the local hospital while you were getting your flu shot.\nGameOver\n";
          break;
        default:
          std::cout << "Invalid input";
          break;
      }
      break; // Break out of the loop once a valid input is received
    } else {
      std::cout << "Invalid input. You did not enter a positive integer between 1 and 2.\n";
      // Clear the error state of cin in case of an invalid input
      std::cin.clear();
      // Ignore the rest of the current line to avoid further input issues
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
  }
  }

}
