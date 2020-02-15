# include <iostream>
# include <sstream>
using namespace std;

/ * Enter code for class Student here. Read statement for specification. * /
class Student {
    public:
    int get_age() const {
        return age;
    }

    std::string get_first_name() const {
        return first_name;
    }

    std::string get_last_name() const {
        return last_name;
    }

    int get_standard() const {
        return standard;
    }

    void set_age(int a) {
        age = a;
    }

    void set_first_name(std::string s) {
        first_name = s;
    }

    void set_last_name(std::string s) {
        last_name = s;
    }

    void set_standard(int s) {
        standard = s;
    }

    std::string to_string() const {
        return std::to_string(age) + "," + first_name + "," + last_name + "," + std::to_string(standard);
    }

    private:
    int age;
    std::string first_name;
    std::string last_name;
    int standard;
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}