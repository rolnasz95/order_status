## Welcome
Welcome to this small and simple console application written in C++!

The goal of this program is to provide the user with some useful calculations regarding their purchase orders.

### Overview

- The program begins by asking the user if they are ready to start.<br/>
- By pressing either 1 or 0, the program will continue or terminate, respectively.<br/>
- If the user proceeds (by pressing 1), the program will ask for the order quantity.<br/>
- Then it will ask for how many items are in stock & ready to be ordered.<br/>
- If there are less *in stock* items than order quantity placed, items will be placed on *back order*.<br/>
- Next question asks if there are special pricing rules (lower/higher base price per item or shipping costs).<br/>
  - Default values are: price per item = 100, shipping price per item = 10<br/>
- If yes, the user can set those prices themselves and proceed with the calculations.<br/>
- Finally, the program will display the calculations and give the user an overview of their estimated costs!<br/>
- **Bonus:** If the user places a pre-determined quantity (500) of items, they will receive a 20% discount! <br/>
