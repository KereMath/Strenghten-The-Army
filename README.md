# Strenghten-The-Army
A kingdom’s strength always came from its treasury, its army and its dedication to science and technology. Imagine a kingdom that a king decided to improve the capability of fighting of his army. Since
the kingdom is under the threat of an enemy, the king orders this command to his generals:
“You shall find me the best way to strengthen the army. The army must be strong
and ready for war at once!”.
The counsellors provisioned that the available budget for this task is N coins. Here are the options
to strengthen the army, each has different cost and different power boost:
• Enlisting new people to the army (option 1)
• Upgrading the armor of archers and infantry (option 2)
• Investing on cavalry, buying fast horses (option 3)
• Researching for better aiming mangonels for sieges (option 4)
• Upgrading the cannons against towers (option 5)
• Improving the equipment used by the infantry (option 6)
So, if you are asked to make choices, how would you implement a strategy for picking the options,
which lead to maximum power gain within the given budget (i.e. amount of coins)? Your task in this
part is to implement a RECURSIVE solution to this problem. Your recursive solution should find
the cost for the subset of options that yields the MAXIMUM power gain. Note that, as you look for
the maximum power gain, you should consider each subset of options (using a recursive approach).
Note that, as you look for the OPTIMAL power gain, you should consider each subset of options
(using a recursive approach). Hint: You may like to watch/read the lecture for recursion on our course
page (week 6). You should implement the1 pt2.c. Iterative solutions WILL NOT be accepted as
an answer and will get 0.
You must consider these:
• Each improvement has a cost and power boost values.
• These cost and power boost values are variable, they will be provided to you as inputs.
• First input will be the number of coins in the budget.
• Each of the remaining lines defines the cost and power boost value of each option above.
