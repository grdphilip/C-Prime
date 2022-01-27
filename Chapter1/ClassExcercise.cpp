/*Program for a bookstore, contains files for transactions, ISBN, copies sold,
Vi vill: Läsa in en fil med transaktioner, och producera en rapport som visar
För varje bok: antal sålda, total revenue, average sales price.
Vi kombinerar data för alla ISBN i en variabel som heter total.
Om trans och total reffererar till samma ISBN uppdaterar vi total, annars printar vi ut total och
återställer den med transaktionen vi nyss läste in.
*/
#include <iostream>
#include "Sales_Item.h"

int main()
{
    Sales_item total;

    if (std::cin >> total)
    {
        Sales_item trans;
        
        while (std::cin >> trans) {
            if (total.isbn() == trans.isbn()) {
                total += trans;
            } else {
                std::cout << total << std::endl;
                total = trans;
            }
        } std::cout << total << std::endl;
    } else {
        std::cerr << "No data?!" << std::endl;
        return -1;
    } return 0;
}



