#include <iostream>
#include <string>
using namespace std;
// Global variable 
int no;
class member { //membership class
public:
    void pass(int months) {
        cout << "Newbie is Rs300 per month, plans are per month" << endl;
        cout << "Total rate: " << 300 * months << endl;
        cout << "Welcome to SOCIOPO: Newbie" << endl;
    }
    void pass(int months, int newbie) {
        cout << "Midgod is Rs600 per month, plans are per month" << endl
             << "plus newbie rate which is Rs150 per month" << endl;
        cout << "Total rate: " << (600 * months) + newbie << endl;
        cout << "Welcome to SOCIOPO: Midgod" << endl;
    }

    void pass(int months, int newbie, int midgod) {
        cout << "Supreme is Rs1000 per month, plans are per month" << endl
             << "plus newbie rate which is Rs100 per month and midgod rate of Rs400"
             << endl;
        cout << "Total rate: " << (1000 * months) + newbie + midgod << endl;
        cout << "Welcome to SOCIOPO: Supreme" << endl;
    }
};

// Monetization checker class
class mon {
public:
    int watch_time;
    int subscribers;
    int total_likes;

    void getinfo() {
        cout << "Enter your watchtime: ";
        cin >> watch_time;
        cout << "Enter your subscribers: ";
        cin >> subscribers;
        cout << "Enter total likes: ";
        cin >> total_likes;
    }

    void display() {
        cout << "Watchtime: " << watch_time << endl;
        cout << "Subscribers: " << subscribers << endl;
        cout << "Total Likes: " << total_likes << endl;
    }
};

// UserProfile class
class UserProfile {
private:
    string username;
    int followers;

public:
    UserProfile(string uname = "", int foll = 0)
        : username(uname), followers(foll) {}

    void inputProfile() {
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter followers: ";
        cin >> followers;
    }

    void display() {
        cout << "Username: " << username << ", Followers: " << followers << endl;
    }

    void updateFollowersByReference(int &newFollowers) {
        followers = newFollowers;
    }

    string &getUsername() {
        return username;
    }
};

// Post class
class Post {
private:
    string content;
    int likes;
    string status;

public:
    Post() : content("No content"), likes(0), status("Draft") {}

    Post(string postContent, int likeCount, string postStatus)
        : content(postContent), likes(likeCount), status(postStatus) {}

    void input() {
        cout << "Enter post content: ";
        cin >> content;
        cout << "Enter number of likes: ";
        cin >> likes;
        cout << "Enter post status (Published/Draft): ";
        cin >> status;
    }

    void display() {
        cout << "Post Content: " << content << endl;
        cout << "Likes: " << likes << endl;
        cout << "Status: " << status << endl;
    }

    void checkMonetization() {
        if (likes >= 10000) {
            cout << "This post is eligible for monetization!" << endl;
        } else {
            cout << "This post is not eligible for monetization." << endl;
        }
    }
};

// User status class
class User {
private:
    string name;
    int followers;
    string status;

public:
    User() : name("Unknown"), followers(0), status("Inactive") {}

    User(string userName) : name(userName), followers(0), status("Inactive") {}

    User(string userName, int followerCount, string accountStatus)
        : name(userName), followers(followerCount), status(accountStatus) {}

    void displayUser() {
        cout << "User Name: " << name << endl;
        cout << "Followers: " << followers << endl;
        cout << "Account Status: " << status << endl;
    }

    void checkInfluencer() {
        if (followers >= 10000) {
            cout << name << " is an influencer!" << endl;
        } else {
            cout << name << " is not an influencer." << endl;
        }
    }
};

// Social_post class
class Social_post {
private:
    string title;
    string content;
    static int postcou;

public:
    Social_post() {
        title = "";
        content = "";
    }
    Social_post(string titlein, string contentin) {
        title = titlein;
        content = contentin;
        postcou++;
    }
    static int getpostcou() {
        return postcou;
    }
    void display() {
        cout << "Title: " << title << endl;
        cout << "Content: " << content << endl;
        cout << endl;
    }
};
int Social_post::postcou = 0;
//Secure account maker class
class acc {
private:
    string username;
    string userid;
    string pass;
    int pin;
public:
    void getinfo() {
        cout << "Enter name: " << endl;
        cin >> username;
        cout << "Enter userid: " << endl;
        cin >> userid;
        cout << "Enter password: " << endl;
        cin >> pass;
        cout << "Enter Access pin [4 digit]: " << endl;
        cin >> pin;
    }
    int getPin() const {
        return pin;
    }
    friend void info(acc a);
};
void info(acc a) {
    cout << "USERNAME: " << a.username << endl;
    cout << "USERID: " << a.userid << endl;
    cout << "PASSWORD: " << a.pass << endl;
}
//ad status class
class ad {
private:
    string content;
    float CPC; // cost per click
    float CTR; // click-through rate
    float clicks;
    float impressions;
    string status;
    string content_sat;
    float total_ad;
    float CTR_R;
public:
    ad() {
        content = "default";
        clicks = 0;
        impressions = 0;
        CPC = 0;
        CTR = 0;
        status = "inactive";
        total_ad = 0;
    }
    void operator++() {
        cout << "ENTER THE CONTENT ID" << endl;
        cin >> content;
        cout << "ENTER THE CLICKS (NO. OF PEOPLE CLICKED THE AD)" << endl;
        cin >> clicks;
        cout << "ENTER THE IMPRESSIONS (NO. OF PEOPLE SAW THE AD)" << endl;
        cin >> impressions;
        cout << "ENTER TOTAL COST OF AD" << endl;
        cin >> total_ad;
        cout << "-----------------------------------------------" << endl;
    }
    void operator--() {
        if (clicks != 0) { 
            CPC = total_ad / clicks;  
        } else {
            CPC = 0; 
        }
        if (impressions != 0) { 
            CTR = (clicks / impressions) * 100;  
        } else {
            CTR = 0; 
        }
        cout << "Content: " << content << endl;
        cout << "Cost-per-click: " << CPC << endl;
        cout << "Click-through-rate: " << CTR << "%" << endl;
        cout << "------------------------------------------------" << endl;
    }
    void operator!() {
        cout << "ENTER CONTENT STATUS ID" << endl;
        cin >> content_sat;
        cout << "ENTER THE ADVERTISMENT STATUS (ACTIVE/INACTIVE)" << endl;
        cin >> status;
        cout << "ENTER THE CTR" << endl;
        cin >> CTR_R;
        cout << "------------------------------------------------" << endl;
    }
    void rate() {
        cout << "Content_Status_ID: " << content_sat << endl;
        cout << "Status: " << status << endl;
        if (CTR_R <= 1) {
            cout << "POOR";
        } else if (CTR_R > 1) {
            cout << "GOOD";
        } else {
            cout << "Error in rating";
        }
        cout << "---------------------------------------------" << endl;
    }
};
//Influencer comparison  class
class Influencer {
    int followers;
    float engagementrate;  
    float avgreach;        
public:
    Influencer() {
        followers = 0;
        engagementrate = 0;
        avgreach = 0;
    }
    Influencer operator+(Influencer &platform) {
        Influencer combined;
        combined.followers = followers + platform.followers;
        combined.engagementrate = (engagementrate + platform.engagementrate) / 2; 
        combined.avgreach = avgreach + platform.avgreach;
        return combined;
    }
    Influencer operator-(Influencer &inf) {
        Influencer diff;
        diff.followers = followers - inf.followers;
        diff.engagementrate = engagementrate - inf.engagementrate;
        diff.avgreach = avgreach - inf.avgreach;
        return diff;
    }
    int operator==(Influencer &inf) {
        if (followers == inf.followers && engagementrate == inf.engagementrate && avgreach == inf.avgreach) {
            return 1; 
        } else {
            return 0;  
        }
    }
    void input(string platformname) {
        cout << "Enter " << platformname << " followers: ";
        cin >> followers;
        cout << "Enter " << platformname << " engagement rate (within 100%): ";
        cin >> engagementrate;
        cout << "Enter " << platformname << " average post reach: ";
        cin >> avgreach;
    }
    void display(string platformname) {
        cout << platformname << " Followers: " << followers << "\n";
        cout << platformname << " Engagement Rate: " << engagementrate << "%\n";
        cout << platformname << " Average Post Reach: " << avgreach << "\n";
    }
    void comparemetrics(Influencer &platform, string platformname1, string platformname2) {
        cout << "\nComparison between " << platformname1 << " and " << platformname2 << ":\n";
        if (followers > platform.followers) {
            cout << platformname1 << " has more followers.\n";
        } else if (followers < platform.followers) {
            cout << platformname2 << " has more followers.\n";
        } else {
            cout << "Both platforms have the same number of followers.\n";
        }
        if (engagementrate > platform.engagementrate) {
            cout << platformname1 << " has a higher engagement rate.\n";
        } else if (engagementrate < platform.engagementrate) {
            cout << platformname2 << " has a higher engagement rate.\n";
        } else {
            cout << "Both platforms have the same engagement rate.\n";
        }
        if (avgreach > platform.avgreach) {
            cout << platformname1 << " has a higher average post reach.\n";
        } else if (avgreach < platform.avgreach) {
            cout << platformname2 << " has a higher average post reach.\n";
        } else {
            cout << "Both platforms have the same average post reach.\n";
        }
    }
};
//Hashtag popu class
class Hashtag {
    string name;
    int reach;
public:
    Hashtag() {
        name = "NoTag";
        reach = 0;
    }
    void input() {
        cout << "Enter hashtag: ";
        cin >> name;
        cout << "Enter reach: ";
        cin >> reach;
    }
    int getreach() {
        return reach;
    }
    void display() {
        cout << "Hashtag: " << name << ", Reach: " << reach << "\n";
    }
};
class Content {
    string name;
    Hashtag* tags;
    int tagcount;
public:
    Content(string n, int t) {
        name = n;
        tagcount = t;
        tags = new Hashtag[t];
    }
    ~Content() {
        delete[] tags;
    }
    Hashtag& operator[](int idx) {
        if (idx < 0 || idx >= tagcount) {
            cout << "Invalid index! Returning first tag.\n";
            return tags[0];
        }
        return tags[idx];
    }
    void besttag() {
        int maxreach = tags[0].getreach();
        int bestIdx = 0;
        for (int i = 1; i < tagcount; ++i) {
            if (tags[i].getreach() > maxreach) {
                maxreach = tags[i].getreach();
                bestIdx = i;
            }
        }
        cout << "Best hashtag for \"" << name << "\":\n";
        tags[bestIdx].display();
    }
    string getname() const {
        return name;
    }
    int gettagcount() const {
        return tagcount;
    }
};
//Campaign manager class
class Campaignmanager {
private:
    string *content;
    string *platform;
    string *date;
    int *click;
    int *impress;
    int *postID;
    int postcount;
    float budget;
public:
    Campaignmanager(int capacity) {
        content = new string[capacity];
        platform = new string[capacity];
        date = new string[capacity];
        click = new int[capacity];
        impress = new int[capacity];
        postID = new int[capacity];
        postcount = 0;
        budget = 0.0;
    }
    void setbudget(float b) {
        budget = b;
    }
    void addpost(string &cont, string &plat, string &d) {
        content[postcount] = cont;
        platform[postcount] = plat;
        date[postcount] = d;
        click[postcount] = 0;
        impress[postcount] = 0;
        postID[postcount] = postcount + 1;
        postcount++;
    }
    void setperformance(int id, int c, int i) {
        for (int j = 0; j < postcount; j++) {
            if (postID[j] == id) {
                click[j] = c;
                impress[j] = i;
                return;
            }
        }
        cout << "Invalid post ID.\n";
    }
    int getengagerate(int index){
        if (impress[index] > 0) {
            return (click[index] * 100) / impress[index];
        } else {
            return 0;
        }
    }
    int getpostcount() {
        return postcount;
    }
    void display(){
        cout << "Budget: Rs" << budget << "\nPosts:\n";
        for (int i = 0; i < postcount; i++) {
            cout << "Post ID: " << postID[i];
            cout << "\nContent: " << content[i];
            cout << "\nPlatform: " << platform[i];
            cout << "\nDate: " << date[i];
            cout << "\nClicks: " << click[i];
            cout << ", Impressions: " << impress[i];
            cout << ", Engagement Rate: " << getengagerate(i) << "%\n";
            cout << "---------------------------------------------\n";
        }
    }
    ~Campaignmanager() {
        delete[] content;
        delete[] platform;
        delete[] date;
        delete[] click;
        delete[] impress;
        delete[] postID;
    }
};
//Meme popularity class
class Meme {
protected:
    int id;
    string creator;
    string type;
public:
    Meme() : id(0), creator(""), type("") {}
    ~Meme() {}
    void inputmeme() {
        cout << "Enter Meme ID: ";
        cin >> id;
        cout << "Enter Creator Name (single word): ";
        cin >> creator;
        cout << "Enter Content Type (e.g., Image, Video, GIF, single word): ";
        cin >> type;
    }
    int getID() {
        return id;
    }
    void displaymeme() {
        cout << "Meme ID: " << id << endl;
        cout << "Creator: " << creator << endl;
        cout << "Content Type: " << type << endl;
    }
};

class Engagement : public Meme {
protected:
    int likes;
    int shares;
    int comments;
    int views;
public:
    Engagement() : likes(0), shares(0), comments(0), views(0) {}
    ~Engagement() {}
    void inputengagement() {
        cout << "Enter Likes: ";
        cin >> likes;
        cout << "Enter Shares: ";
        cin >> shares;
        cout << "Enter Comments: ";
        cin >> comments;
        cout << "Enter Views: ";
        cin >> views;
    }
    int totalengagement() {
        return likes + shares + comments + views;
    }
};
class Popularity : public Engagement {
public:
    Popularity() {}
    ~Popularity() {}
    float predictpop() {
        float score = (likes * 0.4) + (shares * 0.3) + (comments * 0.2) + (views * 0.1);
        return score;
    }
    void displayprediction() {
        float score = predictpop();
        cout << "Predicted Popularity Score: " << score << endl;

        if (score > 1000) {
            cout << "Prediction: Highly Popular" << endl;
        } else if (score > 500) {
            cout << "Prediction: Moderately Popular" << endl;
        } else {
            cout << "Prediction: Less Popular" << endl;
        }
    }
};
void displaymenu() {
    cout << "\n=== Meme Popularity Predictor ===" << endl;
    cout << "1. Input Meme Details" << endl;
    cout << "2. Display Meme Details" << endl;
    cout << "3. Calculate Total Engagement" << endl;
    cout << "4. Display Popularity Prediction" << endl;
    cout << "5. Exit" << endl;
    cout<<"-----------------------------------------"<<endl;
    cout << "Enter your choice: ";
}
class feedback {
protected:
    int id;
    string text;
public:
    feedback() : id(0), text("") {}
    ~feedback() {}
    void input() {
        cout << "Enter feedback id: ";
        cin >> id;
        cout << "Enter feedback text (single word): ";
        cin >> text;
    }
    void show() {
        cout << "Feedback id: " << id << endl;
        cout << "Feedback text: " << text << endl;
    }
    int get_id() {
        return id;
    }
    string get_text() {
        return text;
    }
};
//User sentiment class
class sentiment {
protected:
    string category;
    int score;
public:
    sentiment() : category(""), score(0) {}
    ~sentiment() {}
    void analyze(const string& txt) {
        if (txt == "great" || txt == "amazing") {
            category = "excellent";
            score = 10;
        } else if (txt == "good" || txt == "nice") {
            category = "positive";
            score = 7;
        } else if (txt == "okay" || txt == "fine") {
            category = "neutral";
            score = 5;
        } else if (txt == "bad" || txt == "poor") {
            category = "negative";
            score = 2;
        } else {
            category = "terrible";
            score = 0;
        }
    }
    void show_sentiment() {
        cout << "Sentiment category: " << category << endl;
        cout << "Sentiment score: " << score << endl;
    }
};
class analyzer : public feedback, public sentiment {
public:
    analyzer() {}
    ~analyzer() {}
    void show_analysis() {
        show();
        show_sentiment();
    }
    void update_text(const string& new_text) {
        text = new_text;
        analyze(text);
    }
};
class report : public analyzer {
public:
    report() {}
    ~report() {}
    void generate() {
        cout << "\n=== Feedback Report ===" << endl;
        show_analysis();
        cout << "-----------------------" << endl;
    }
};
void add_feedback(report* reports, int& count);
void show_all(report* reports, int count);
void find_by_id(report* reports, int count);
void update_by_id(report* reports, int count);
void delete_by_id(report*& reports, int& count);
class UserInteraction {
protected:
    int userID;
    int likes;
    int shares;
    int comments;
    int accountAge;
public:
    UserInteraction() : userID(0), likes(0), shares(0), comments(0), accountAge(0) {}
    ~UserInteraction() {}
    void inputDetails() {
        cout << "Enter User ID: ";
        cin >> userID;
        cout << "Enter number of Likes: ";
        cin >> likes;
        cout << "Enter number of Shares: ";
        cin >> shares;
        cout << "Enter number of Comments: ";
        cin >> comments;
        cout << "Enter Account Age (in months): ";
        cin >> accountAge;
    }
    int getUserID() {
        return userID;
    }
    virtual float calculateScore() {
        return (likes * 0.5) + (shares * 1.0) + (comments * 0.8);
    }
};
class ExtraScore {
protected:
    int badges;
public:
    ExtraScore() : badges(0) {}
    ~ExtraScore() {}
    void inputBadges() {
        cout << "Enter number of Badges: ";
        cin >> badges;
    }
    int getBadges() {
        return badges;
    }
};
class LoyaltyEvaluator : public UserInteraction, public ExtraScore {
public:
    LoyaltyEvaluator() {}
    ~LoyaltyEvaluator() {}
    float calculateScore() {
        float engagementScore = UserInteraction::calculateScore();
        return engagementScore + (accountAge * 2.0) + (badges * 1.5);
    }
    string categorizeUser() {
        float loyaltyScore = calculateScore();
        if (loyaltyScore > 200) {
            return "Loyal";
        } else if (loyaltyScore > 100) {
            return "Regular";
        } else {
            return "New";
        }
    }
};
void displayMenu() {
    cout << "\n=== Social Media Loyalty Score Evaluator ===" << endl;
    cout << "1. Input User Details" << endl;
    cout << "2. Input Extra Score Details" << endl;
    cout << "3. Display Interaction and Loyalty Score" << endl;
    cout << "4. Display User Category" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
}

// Main function
int main() {
    member pass;
    cout << "Welcome to SOCIOpo -  Empowering Your Social Influence with Data-Driven Insights" << endl;
    cout << "----------------------------------------" << endl;
    cout << "------MENU------" << endl;
    cout << "1. Secure Account Maker " << endl;
    cout << "2. Monetization Checker" << endl;
    cout << "3. Subaccount & Updation" << endl;
    cout << "4. Post Monetization & Status Checker" << endl;
    cout << "5. User & Influencer Checker" << endl;
    cout << "6. Post Counter" << endl;
    cout << "7. Membership "<<endl;
    cout << "8. Ad engagement checker "<<endl;
    cout << "9. Influencer comparison "<<endl;
    cout << "10.Best Hashtag checker "<<endl;
    cout << "11.Campaign Manager" <<endl;
    cout << "12.Meme Popularity Checker "<<endl;
    cout << "13.Sentiment and Feedback Analyzer "<<endl;
    cout << "14.User Loyalty Evaluator "<<endl;
    int choice_imp;
    cout << "Enter your choice: ";
    cin >> choice_imp;
    
    //main switch case 
    switch (choice_imp) {   
    case 7: {     //MEMBERSHIP
    	cout<<"-------------------------------------------------------"<<endl;
        int months;
        cout << "MEMBERSHIP\nHow many months you want from a year?\n";
        cin >> months;
        cout << "Want to proceed? YES/NO\n";
        string proceed;
        cin >> proceed;
        if (proceed == "YES" || proceed == "yes") {
            cout << "Enter which membership pass to take (1- NEWBIE, 2- MIDGOD, 3- SUPREME)\n";
            int choice;
            cin >> choice;
            int newbie_m = months * 150;
            int newbie_s = months * 100;
            int midgod_s = months * 400;
            switch (choice) {
            case 1:
                pass.pass(months);
                break;
            case 2:
                pass.pass(months, newbie_m);
                break;
            case 3:
                pass.pass(months, newbie_s, midgod_s);
                break;
            default:
                cout << "Error" << endl;
            }
        } else {
            cout << "Thank you for visiting" << endl;
        }
        break;
    }
//MONETIZATION CHECKER
    case 2: {
    	cout<<"-----------------------------------------------------------------------"<<endl;
        cout << "Welcome to Monetization Page-SOCIOpo\nDo you want to check your eligibility? YES/NO\n";
        string choice;
        cin >> choice;
        if (choice == "YES" || choice == "yes") {
            cout << "How many accounts to check?\n";
            cin >> no;
            mon moni[no];
            for (int i = 0; i < no; i++) {
                moni[i].getinfo();
                moni[i].display();
                if (moni[i].watch_time >= 4000 && moni[i].subscribers >= 1000 &&
                    moni[i].total_likes >= 10000) {
                    cout << "You are eligible" << endl;
                } else {
                    cout << "You are not eligible" << endl;
                }
                cout << "---------------------------------" << endl;
            }
        } else {
            cout << "Thank you, visit again" << endl;
        }
        break;
    }
//SUB-ACCOUNT MAKER
    case 3: {
    	cout<<"--------------------------------------------------"<<endl;
        int numUsers;
        cout << "How many sub-accounts would you like to make? ";
        cin >> numUsers;
        UserProfile users[numUsers];
        for (int i = 0; i < numUsers; i++) {
            cout << "Entering details for user " << i + 1 << ":" << endl;
            users[i].inputProfile();
        }
        for (int i = 0; i < numUsers; i++) {
            users[i].display();
        }
        int userIndex;
        cout << "Enter the index of the user you want to update: ";
        cin >> userIndex;
        userIndex--;
        int choice;
        cout << "1. Update Followers\n2. Update Username\n";
        cin >> choice;
        switch (choice) {
        case 1: {
            int newFollowers;
            cout << "Enter new followers: ";
            cin >> newFollowers;
            users[userIndex].updateFollowersByReference(newFollowers);
            break;
        }
        case 2: {
            string newUsername;
            cout << "Enter new username: ";
            cin >> newUsername;
            users[userIndex].getUsername() = newUsername;
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
        }
        for (int i = 0; i < numUsers; i++) {
            users[i].display();
        }
        break;
    }
//POST ANALYSER  
    case 4: {
    cout<<"------------------------------------------"<<endl;
    int numPosts;
    cout << "How many posts do you want to input? ";
    cin >> numPosts;
    Post posts[numPosts];
    for (int i = 0; i < numPosts; ++i) {
        cout << "\nInput details for Post " << (i + 1) << ":\n";
        posts[i].input();
    }
    cout << "\nPost Details and Monetization Status:\n";
    for (int i = 0; i < numPosts; ++i) {
        cout << "\nPost " << (i + 1) << ":" << endl;
        posts[i].display();
        posts[i].checkMonetization();
    }
    Post copiedPost(posts[numPosts]); 
    cout << "\nDetails of copied post (first post):" << endl;
    copiedPost.display();
    copiedPost.checkMonetization();
    return 0;
    }
//USER MAKER
    case 5: {
    	cout<<"------------------------------------"<<endl;
    	int numUsers;
    cout << "How many users do you want to create? ";
    cin >> numUsers;
    User users[numUsers];
    for (int i = 0; i < numUsers; i++) {
        int choice;
        string name, status;
        int followers;
        cout << "\nSelect the type of user to create for User " << i + 1 << ":" << endl;
        cout << "1. Default User" << endl;
        cout << "2. User with Name Only" << endl;
        cout << "3. User with Full Details" << endl;
        cout << "Enter your choice (1/2/3): ";
        cin >> choice;
        switch (choice) {
            case 1:
                users[i] = User();
                break;
            case 2: 
                cout << "Enter user name: ";
                cin >> name;
                users[i] = User(name);
                break;
            case 3:
                cout << "Enter user name: ";
                cin >> name;
                cout << "Enter number of followers: ";
                cin >> followers;
                cout << "Enter account status (Active/Inactive): ";
                cin >> status;
                users[i] = User(name, followers, status);
                break;
            default:
                cout << "Invalid choice!" << endl;
                i--; 
                break;
        }
    }
    cout << "\nUser Details and Influencer Status:" << endl;
    for (int i = 0; i < numUsers; i++) {
        cout << "\nUser " << i + 1 << " Details:" << endl;
        users[i].displayUser();
        users[i].checkInfluencer();
    }
    return 0;
    break;
    }
    //POST COUNTER
    case 6: {
    cout<<"----------------------------------------------"<<endl;
    const int MAX_POSTS = 10; 
    Social_post posts[MAX_POSTS]; 
    int numposts = 0;
    cout << "Enter the number of posts you want to create (up to " << MAX_POSTS<<"posts at a time)::";
    cin >> numposts;
    if (numposts > MAX_POSTS) {
        numposts = MAX_POSTS; 
        cout << "Number of posts limited to " << MAX_POSTS << endl;
    }
    for (int i = 0; i < numposts; i++) {
        string title;
        string content;
        cout << "Enter title for post " << (i + 1) << ": ";
        cin >> title; 
        cout << "Enter content for post " << (i + 1) << ": ";
        cin >> content;
        posts[i] = Social_post(title, content);
    }
    cout << "\nDisplaying all posts:\n";
    for (int i = 0; i < numposts; i++) {
        posts[i].display();
    }
    Social_post obj; 
    cout << "Total Number of Posts: " << obj.getpostcou() << endl;
    break;
   }
   //Secure account maker
   case 1:{
   	cout<<"--------------------------------------------------------------"<<endl;
   	acc ac;
    cout << "Welcome to SOCIOPO/Secure Account maker" << endl;
    cout << "Want to create account?" << endl << "1.YES" << endl << "2.NO" << endl;
    string choice;
    cin >> choice;
    if (choice == "YES" || choice == "yes") {
        ac.getinfo();
        cout << "Want to access info?" << endl << "1.YES" << endl << "2.NO" << endl;
        string inf;
        cin >> inf;
        if (inf == "YES" || inf == "yes") {
            cout << "Enter Access pin: ";
            int acpin;
            cin >> acpin;

            if (ac.getPin() == acpin) {
                info(ac);
            } else {
                cout << "Access denied" << endl;
            }
        }else if(inf=="NO" || inf=="NO"){
        	cout<<"Thank you"<<endl;
		}else{
			cout<<"Error"<<endl;
		}
    } else if (choice == "NO" || choice == "no") {
        cout << "Thank you" << endl;
    }else{
    	cout<<"ERROR";
	}
    return 0;
	break;
   }
   //AD STATUS
   case 8:{
   	cout<<"-------------------------------------------------"<<endl;
    cout << "WELCOME TO SOCIOPO AD STATUS" << endl;
    char choice_con; 
    do {
        cout << "1. CTR/CPC(Click-through-rate/Cost-per-Click)"<<endl;
        cout << "2. Rating status" << endl;
        int choice;
        cin >> choice;
        cout << "Enter how many user inputs to make?" << endl;
        int num;
        cin >> num;
        ad socio[num];
        switch (choice) {
            case 1:
                for (int i = 0; i < num; i++) {
                    cout << "Enter the details for CTR/CPC for ad " << (i + 1) << endl;
                    ++socio[i];
                }
                for (int i = 0; i < num; i++) {
                    cout << "CTR/CPC for ad " << (i + 1) << endl;
                    --socio[i];
                }
                break;
            case 2:
                for (int i = 0; i < num; i++) {
                    cout << "Enter the details for rating ad " << (i + 1) << endl;
                    !socio[i];
                }
                for (int i = 0; i < num; i++) {
                    cout << "Rating for ad " << (i + 1) << endl;
                    socio[i].rate();
                }
                break;
            default:
                cout << "Invalid choice" << endl;
        }
        cout << "\nDo you want to continue? (y/n): ";
        cin >> choice_con;
    } while (choice_con == 'y' || choice_con == 'Y');
    return 0;
	break;
   }
   //PLATFORM COMPARISON
   case 9:{
   	cout<<"--------------------------------------------"<<endl;
    cout << "WELCOME TO SOCIOPO-PlatCOMPARISO\n";
    cout << "------------------------------------\n";
    Influencer platform1, platform2;
    string platformname1, platformname2;
    char choice_con;  
    do {
        cout << "Enter the name of the first platform (e.g., X, Instagram): ";
        cin >> platformname1;
        platform1.input(platformname1);
        cout << "\nEnter the name of the second platform: ";
        cin >> platformname2;
        platform2.input(platformname2);
        cout << "\nWhat would you like to do?\n";
        cout << "1. Combine the metrics from both platforms (" << platformname1 << " + " << platformname2 << ")\n";
        cout << "2. Find the difference in metrics between the two platforms\n";
        cout << "3. Compare if both platforms have the same stats\n";
        cout << "Enter your choice (1, 2, 3): ";
        int choice;
        cin >> choice;
        switch (choice) {
            case 1: {
                Influencer combined = platform1 + platform2;
                cout << "\nCombined Metrics (" << platformname1 << " + " << platformname2 << "):\n";
                combined.display("Combined");
                break;
            }
            case 2: {
                Influencer difference = platform1 - platform2;
                cout << "\nDifference in Metrics (" << platformname1 << " - " << platformname2 << "):\n";
                difference.display("Difference");
                platform1.comparemetrics(platform2, platformname1, platformname2);
                break;
            }
            case 3: {
                if (platform1 == platform2) {
                    cout << "\nThe metrics for " << platformname1 << " and " << platformname2 << " are identical.\n";
                } else {
                    cout << "\nThe metrics for " << platformname1 << " and " << platformname2 << " are different.\n";
                }
                break;
            }
            default:
                cout << "\nInvalid choice! Please enter 1, 2, or 3.\n";
        }
        cout << "\nDo you want to continue? (y/n): ";
        cin >> choice_con;
    } while (choice_con == 'y' || choice_con == 'Y');
    return 0;
	break;
   }
   //HASHTAG POPULARITY COUNTER
   case 10:{
   	cout<<"--------------------------------------"<<endl;
    cout << "WELCOME TO HASHTAGu\n";
    Content* posts[10];
    int postcount = 0;
    int choice;
    do {
        cout << "\n--- Menu ---\n";
        cout << "1. Add Content\n";
        cout << "2. Input Hashtags\n";
        cout << "3. Find Best Hashtag\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int newposts;
                cout << "How many contents to add? ";
                cin >> newposts;
                if (postcount + newposts > 10) {
                    cout << "Limit reached. Can only add " << 10 - postcount << " more.\n";
                    newposts = 10 - postcount;
                }
                for (int i = 0; i < newposts; ++i) {
                    string postname;
                    int tagnum;
                    cout << "Enter content name " << postcount + 1 << ": ";
                    cin >> postname;
                    cout << "Enter number of hashtags: ";
                    cin >> tagnum;
                    posts[postcount] = new Content(postname, tagnum);
                    postcount++;
                }
                break;
            }
            case 2: {
                if (postcount == 0) {
                    cout << "No content. Add content first.\n";
                    break;
                }
                for (int i = 0; i < postcount; ++i) {
                    cout << "Input hashtags for \"" << posts[i]->getname() << "\":\n";
                    for (int j = 0; j < posts[i]->gettagcount(); ++j) {
                        cout << "Hashtag " << j + 1 << ":\n";
                        (*posts[i])[j].input();
                    }
                }
                break;
            }
            case 3: {
                if (postcount == 0) {
                    cout << "No content. Add content first.\n";
                    break;
                }
                cout << "Best hashtags:\n";
                for (int i = 0; i < postcount; ++i) {
                    posts[i]->besttag();
                }
                break;
            }
            case 4:
                cout << "Exiting.\n";
                break;
            default:
                cout << "Invalid choice! Enter 1 to 4.\n";
        }
    } while (choice != 4);

    for (int i = 0; i < postcount; ++i) {
        delete posts[i];
    }
    return 0;
	break;
   }
   //CAMPAIGN MAKER
   case 11:{
   	cout<<"--------------------------------------------------"<<endl;
    int numposts;
    cout << "WELCOME TO CAMPAIGN STATUS\n";
    cout << "Enter number of posts: ";
    cin >> numposts;
    Campaignmanager manager(numposts);
    int choice;
    string cont, plat, d;
    float b;
    do {
        cout << "1. Set Budget\n";
        cout << "2. Add Post\n";
        cout << "3. Set Post Performance\n";
        cout << "4. Display Campaign\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "Enter Budget: ";
            cin >> b;
            manager.setbudget(b);
            break;
        case 2:
            if (manager.getpostcount() < numposts) {
                cout << "Enter Content: ";
                cin >> cont;
                cout << "Enter Platform: ";
                cin >> plat;
                cout << "Enter Date (YYYY-MM-DD): ";
                cin >> d;
                manager.addpost(cont, plat, d);
            } else {
                cout << "Max posts reached.\n";
            }
            break;
        case 3:
            int id, c, i;
            cout << "Enter Post ID: ";
            cin >> id;
            cout << "Enter Clicks: ";
            cin >> c;
            cout << "Enter Impressions: ";
            cin >> i;
            manager.setperformance(id, c, i);
            break;
        case 4:
            manager.display();
            break;
        case 5:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice! Enter 1 to 5.\n";
        }
    } while (choice != 5);
    return 0;
	break;
   }
   //MEME POPULARITY
   case 12:{
   	cout<<"----------------------------------------------"<<endl;
   	Popularity* memes = NULL;
    int nummemes = 0;
    int choice;
    do {
        displaymenu();
        cin >> choice;
        if (choice >= 1 && choice <= 4) {
            if (nummemes == 0) {
                cout << "Enter the number of memes: ";
                cin >> nummemes;
                memes = new Popularity[nummemes];
            }
        }
        switch (choice) {
        case 1:
            for (int i = 0; i < nummemes; i++) {
                cout << "\nEntering details for Meme " << (i + 1) << ":" << endl;
                memes[i].inputmeme();
                memes[i].inputengagement();
            }
            cout << "Meme details and engagement metrics entered successfully." << endl;
            break;
        case 2: {
            int id;
            cout << "Enter the Meme ID to display details: ";
            cin >> id;
            int found = 0;
            for (int i = 0; i < nummemes; i++) {
                if (memes[i].getID() == id) {
                    memes[i].displaymeme();
                    found = 1;
                    break;
                }
            }
            if (found == 0) {
                cout << "Meme with ID " << id << " not found." << endl;
            }
            break;
        }
        case 3: {
            int id;
            cout << "Enter the Meme ID to calculate total engagement: ";
            cin >> id;
            int found = 0;
            for (int i = 0; i < nummemes; i++) {
                if (memes[i].getID() == id) {
                    cout << "Total Engagement: " << memes[i].totalengagement() << endl;
                    found = 1;
                    break;
                }
            }
            if (found == 0) {
                cout << "Meme with ID " << id << " not found." << endl;
            }
            break;
        }
        case 4: {
            int id;
            cout << "Enter the Meme ID to display popularity prediction: ";
            cin >> id;
            int found = 0;
            for (int i = 0; i < nummemes; i++) {
                if (memes[i].getID() == id) {
                    memes[i].displayprediction();
                    found = 1;
                    break;
                }
            }
            if (found == 0) {
                cout << "Meme with ID " << id << " not found." << endl;
            }
            break;
        }
        case 5:
            cout << "Exiting the program." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);
    delete[] memes;
    return 0;
	break;
   }
   //SENTIMENT AND FEEDBACK ANALYSER
   case 13:{
   	cout<<"----------------------------------------------------"<<endl;
   	int choice, count = 0;
    int max_entries = 100;
    report* reports = new report[max_entries];
    while (true) {
        cout << "\n=== Sentiment and Feedback Analyzer ===" << endl;
        cout << "1. Add feedback(great,amazing,good,nice,okay,fine,bad,poor,terrible)" << endl;
        cout << "2. Show all feedbacks" << endl;
        cout << "3. Find feedback by id" << endl;
        cout << "4. Update feedback by id" << endl;
        cout << "5. Delete feedback by id" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                add_feedback(reports, count);
                break;
            case 2:
                show_all(reports, count);
                break;
            case 3:
                find_by_id(reports, count);
                break;
            case 4:
                update_by_id(reports, count);
                break;
            case 5:
                delete_by_id(reports, count);
                break;
            case 6:
                delete[] reports;
                cout << "Exiting the program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
	break;
   }
   //LOYALTY CHECKER
   case 14:{
   	cout<<"-------------------------------------------"<<endl;
   	LoyaltyEvaluator* users = 0;
    int numberOfUsers = 0;
    int choice;
    do {
        displayMenu();
        cin >> choice;
        if (choice >= 1 && choice <= 4) {
            if (numberOfUsers == 0) {
                cout << "Enter the number of users: ";
                cin >> numberOfUsers;
                users = new LoyaltyEvaluator[numberOfUsers];
            }
        }
        switch (choice) {
        case 1:
            for (int i = 0; i < numberOfUsers; i++) {
                cout << "\nEntering details for User " << (i + 1) << ":" << endl;
                users[i].inputDetails();
            }
            cout << "User details entered successfully." << endl;
            break;
        case 2:
            for (int i = 0; i < numberOfUsers; i++) {
                cout << "\nEntering extra score details for User " << (i + 1) << ":" << endl;
                users[i].inputBadges();
            }
            cout << "Extra score details entered successfully." << endl;
            break;
        case 3: {
            int userID;
            cout << "Enter User ID to display scores: ";
            cin >> userID;
            int found = 0;
            for (int i = 0; i < numberOfUsers; i++) {
                if (users[i].getUserID() == userID) {
                    cout << "Interaction Score: " << users[i].UserInteraction::calculateScore() << endl;
                    cout << "Loyalty Score: " << users[i].calculateScore() << endl;
                    found = 1;
                    break;
                }
            }
            if (found == 0) {
                cout << "User with ID " << userID << " not found." << endl;
            }
            break;
        }
        case 4: {
            int userID;
            cout << "Enter User ID to display User Category: ";
            cin >> userID;
            int found = 0;
            for (int i = 0; i < numberOfUsers; i++) {
                if (users[i].getUserID() == userID) {
                    cout << "User Category: " << users[i].categorizeUser() << endl;
                    found = 1;
                    break;
                }
            }
            if (found == 0) {
                cout << "User with ID " << userID << " not found." << endl;
            }
            break;
        }
        case 5:
            cout << "Exiting the program." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);
    if (users != 0) {
        delete[] users;
    }
    return 0;
	break;
   }
   return 0;

}
}
void add_feedback(report* reports, int& count) {
    int num;
    cout << "How many feedbacks do you want to add? ";
    cin >> num;
    for (int i = 0; i < num; ++i) {
        cout << "\nEnter details for feedback " << (count + 1) << ":" << endl;
        reports[count].input();
        reports[count].analyze(reports[count].get_text());
        count++;
    }
}
void show_all(report* reports, int count) {
    if (count == 0) {
        cout << "No feedbacks available." << endl;
        return;
    }
    for (int i = 0; i < count; ++i) {
        reports[i].generate();
    }
}
void find_by_id(report* reports, int count) {
    if (count == 0) {
        cout << "No feedbacks available." << endl;
        return;
    }
    int id;
    cout << "Enter feedback id to search: ";
    cin >> id;
    for (int i = 0; i < count; ++i) {
        if (reports[i].get_id() == id) {
            reports[i].generate();
            return;
        }
    }
    cout << "Feedback with id " << id << " not found." << endl;
}
void update_by_id(report* reports, int count) {
    if (count == 0) {
        cout << "No feedbacks available." << endl;
        return;
    }
    int id;
    string new_text;
    cout << "Enter feedback id to update: ";
    cin >> id;
    for (int i = 0; i < count; ++i) {
        if (reports[i].get_id() == id) {
            cout << "Enter new feedback text (single word): ";
            cin >> new_text;
            reports[i].update_text(new_text);
            cout << "Feedback updated successfully." << endl;
            return;
        }
    }
    cout << "Feedback with id " << id << " not found." << endl;
}
void delete_by_id(report*& reports, int& count) {
    if (count == 0) {
        cout << "No feedbacks available." << endl;
        return;
    }
    int id, idx = -1;
    cout << "Enter feedback id to delete: ";
    cin >> id;
    for (int i = 0; i < count; ++i) {
        if (reports[i].get_id() == id) {
            idx = i;
            break;
        }
    }
    if (idx == -1) {
        cout << "Feedback with id " << id << " not found." << endl;
        return;
    }
    for (int i = idx; i < count - 1; ++i) {
        reports[i] = reports[i + 1];
    }
    count--;
    cout << "Feedback deleted successfully." << endl;
}



