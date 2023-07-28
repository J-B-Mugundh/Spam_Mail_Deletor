#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

struct Email {
    string mail;
    string content;
};

vector<Email> filterSpamMails(const vector<Email>& emails) {
    unordered_map<string, unordered_map<string, bool>> seen;
    vector<Email> inbox;

    for (const auto& email : emails) {
        if (!seen[email.mail][email.content]) {
            seen[email.mail][email.content] = true;
            inbox.push_back(email);
        }
    }

    return inbox;
}

int main() {
    vector<Email> emails = {
        {"user1@example.com", "Important message 1"},
        {"user2@example.com", "Spam content 1"},
        {"user1@example.com", "Duplicate email content"},
        {"user3@example.com", "Spam content 2"},
        {"user2@example.com", "Spam content 1"}, // Duplicate spam content
        {"user1@example.com", "Important message 2"},
        {"user1@example.com", "Duplicate email content"}
    };

    vector<Email> filteredEmails = filterSpamMails(emails);

    cout << "Filtered Inbox:\n";
    for (const auto& email : filteredEmails) {
        cout << "Mail Id: " << email.mail << "\n";
        cout << "Mail Content: " << email.content << "\n\n";
    }

    return 0;
}
