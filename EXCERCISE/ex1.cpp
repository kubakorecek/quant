/* Excercise are taken from 
Options, Futures and Other Derivatives



1.1. What is the difference between a long forward position and a short forward position?
1.2. Explain carefully the difference between hedging, speculation, and arbitrage.
1.3. What is the difference between entering into a long forward contract when the forward
price is $50 and taking a long position in a call option with a strike price of $50?
1.4. Explain carefully the difference between selling a call option and buying a put option.
1.5. An investor enters into a short forward contract to sell 100,000 British pounds for US
dollars at an exchange rate of 1.5000 US dollars per pound. How much does the
investor gain or lose if the exchange rate at the end of the contract is (a) 1.4900 and
(b) 1.5200?
1.6. A trader enters into a short cotton futures contract when the futures price is 50 cents per
pound. The contract is for the delivery of 50,000 pounds. How much does the trader
gain or lose if the cotton price at the end of the contract is (a) 48.20 cents per pound
and (b) 51.30 cents per pound?
1.7. Suppose that you write a put contract with a strike price of $40 and an expiration date
in 3 months. The current stock price is $41 and the contract is on 100 shares. What have
you committed yourself to? How much could you gain or lose?
1.8. What is the difference between the over-the-counter market and the exchange-traded
market? What are the bid and offer quotes of a market maker in the over-the-counter
market?
1.9. You would like to speculate on a rise in the price of a certain stock. The current stock
price is $29 and a 3-month call with a strike price of $30 costs $2.90. You have $5,800 to
invest. Identify two alternative investment strategies, one in the stock and the other in
an option on the stock. What are the potential gains and losses from each?
1.10. Suppose that you own 5,000 shares worth $25 each. How can put options be used to
provide you with insurance against a decline in the value of your holding over the next
4 months?
1.11. When first issued, a stock provides funds for a company. Is the same true of a stock
option? Discuss.
1.12. Explain why a futures contract can be used for either speculation or hedging.
1.13. Suppose that a March call option to buy a share for $50 costs $2.50 and is held until
March. Under what circumstances will the holder of the option make a profit? Under what
circumstances will the option be exercised? Draw a diagram illustrating how the profit
from a long position in the option depends on the stock price at maturity of the option.
1.14. Suppose that a June put option to sell a share for $60 costs $4 and is held until June.
Under what circumstances will the seller of the option (i.e., the party with the short
position) make a profit? Under what circumstances will the option be exercised? Draw a
diagram illustrating how the profit from a short position in the option depends on the
stock price at maturity of the option.
1.15. It is May and a trader writes a September call option with a strike price of $20. The stock
price is $18 and the option price is $2. Describe the trader’s cash flows if the option is held
until September and the stock price is $25 at that time.
1.16. A trader writes a December put option with a strike price of $30. The price of the option
is $4. Under what circumstances does the trader make a gain?
1.17. A company knows that it is due to receive a certain amount of a foreign currency in
4 months. What type of option contract is appropriate for hedging?
1.18. A US company expects to have to pay 1 million Canadian dollars in 6 months. Explain
how the exchange rate risk can be hedged using (a) a forward contract and (b) an option.


1.19. A trader enters into a short forward contract on 100 million yen. The forward exchange
rate is $0.0090 per yen. How much does the trader gain or lose if the exchange rate at the
end of the contract is (a) $0.0084 per yen and (b) $0.0101 per yen?
1.20. The CME Group offers a futures contract on long-term Treasury bonds. Characterize the
traders likely to use this contract.
1.21. ‘‘Options and futures are zero-sum games.’’ What do you think is meant by this?
1.22. Describe the profit from the following portfolio: a long forward contract on an asset and a
long European put option on the asset with the same maturity as the forward contract and
a strike price that is equal to the forward price of the asset at the time the portfolio is set up.
1.23. In the 1980s, Bankers Trust developed index currency option notes (ICONs). These are
bonds in which the amount received by the holder at maturity varies with a foreign
exchange rate. One example was its trade with the Long Term Credit Bank of Japan. The
ICON specified that if the yen–US dollar exchange rate, ST , is greater than 169 yen per
dollar at maturity (in 1995), the holder of the bond receives $1,000. If it is less than
169 yen per dollar, the amount received by the holder of the bond is
1,000  max

0; 1,000

169
ST  1

When the exchange rate is below 84.5, nothing is received by the holder at maturity. Show
that this ICON is a combination of a regular bond and two options.
1.24. On July 1, 2011, a company enters into a forward contract to buy 10 million Japanese yen
on January 1, 2012. On September 1, 2011, it enters into a forward contract to sell
10 million Japanese yen on January 1, 2012. Describe the payoff from this strategy.
1.25. Suppose that USD/sterling spot and forward exchange rates are as follows:
Spot 1.5580
90-day forward 1.5556
180-day forward 1.5518
What opportunities are open to an arbitrageur in the following situations?
(a) A 180-day European call option to buy £1 for $1.42 costs 2 cents.
(b) A 90-day European put option to sell £1 for $1.49 costs 2 cents.
1.26. A trader buys a call option with a strike price of $30 for $3. Does the trader ever exercise
the option and lose money on the trade? Explain your answer.
1.27. A trader sells a put option with a strike price of $40 for $5. What is the trader’s maximum
gain and maximum loss? How does your answer change if it is a call option?
1.28. ‘‘Buying a put option on a stock when the stock is owned is a form of insurance.’’ Explain
this statement.


1.1

Long forward position - Trader agreeing to buy underlying asset for future price. 

Short forward position - Trader agreeing to sell underlying asset  in future price


1.2

Hedging
Trader is trying to offset the exposure of the price by taking position 
in the derivaties.

Speculation
There is no exposure, trader betting on the future movements in the price of the asset.


Arbitrage
IS buying from different stock exchange and the selling somewhere else.

*/
#include <iostream>
using namespace std;
/*1.5*/
void problem_1_5(){
    int contract = 100000;
    float exchange_rate = 1.4;

    cout<<"The answer to A is, there gain is "<<contract*exchange_rate-1.39*contract;
    cout<<endl;
    cout<<"The answer to B is, there loss is "<<contract*exchange_rate-1.42*contract;
    cout<<endl;
};
/*1.6*/
void problem_1_6(){
    float future_price = 50;
    float contract = 50000;

    cout<<"The answer to A is, there gain is in cents "<<contract*future_price-48.2*contract;
    cout<<endl;
    cout<<"The answer to B is, there loss is in cents "<<contract*future_price-51.3*contract;
    cout<<endl;
};

int main()
{
problem_1_5();
problem_1_6();
}