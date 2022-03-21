#include <iostream>
#include <string>
using namespace std;

class ADTList
{
  private:
    struct Node
    {
      string firstName;
      string lastName;
      string phoneNumber;
      Node *next;
    };
    Node head;
    Node* tail;

  public:
    List()
    {
        head = nullptr;
        tail = nullptr;
    }

    void makeContact(string const& firstN, string const& lastN, string const& phoneNum)
    {
        Node* node = new Node(firstN, lastN, phoneN, nullptr);
        tail->next = tempNode;
        tail = tempNode;
    }

    void showAll(ostream const& outStream = cout) const
    {
        int contactNumber = 0;
        if (head == nullptr) {
            cout << "There are no contacts stored yet.\n";
        }
        for (node *current = head; current; current = current->next)
        {
            outStream << *current;
        }
    }

    void showContact(string const& firstN, string const& lastN)
    {
        bool Match;

        node *current = head;
        Match = false;
        int index = -1;

        while (current != nullptr & !Match)
        {
            if (current->firstName == firstN && current->lastName == lastN)
            {
                index++;
                Match = true;
            }
            else
            {
                current = current->next;
            }

        }
        if (found)
        {
            cout << *current
            deleteContact(index);
        }
        else
        {
            cout << "\n" << "The contact with the name " << firstN << " " << lastN << " was not found.\n";
        }
    }

    void searchName(string const& firstN, string const& lastN)
    {
        auto data = list.find(firstN, lastN);
        if (data !=list.end()) {
            outStream << data;
        }
        else {
            std::cout << "There is nobody in the database with name " << firstN << " " << lastN << "\n";
        }
    }

    void deleteContact(int indexPosition)
    {
        if (indexPosition < 1 || head = nullptr)
           return;
        node *target{head};
        if (indexPosition == 1) {
            if (tail == target) {
                head = tail = nullptr
            } else {
                head = head->next;
            }
        } else {
            node *notHead {head};
            for (indexPosition -= 2; indexPosition; --indexPosition) {
                if (notHead == nullptr) {
                    return;
                    notHead = notHead->next;
                }
            }
            target = notHead->next;
            notHead->next = target->next;
            if (tail==target) {
                tail = notHead;
            }
        }
        delete target;
    }
}

