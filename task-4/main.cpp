#include <iostream>  // cout
#include <string>
#include <vector>

using namespace std;

size_t get_longest_text(const vector<string>& lines)
{
    size_t ret = 0;
    for (auto& line : lines)
    {
        if (line.size() > ret)
        {
            ret = line.size();
        }
    }
    return ret;
}

void print_border_top_or_bottom_line(size_t longest_text)
{
    for (size_t i = 0; i < longest_text + 4; ++i)
    {
        cout << "*";
    }
    cout << "\n";
}

void print_line(const string& text, size_t longest_text)
{
    cout << "*";
    cout << " ";
    cout << text;
    cout << string(longest_text + 1 - text.size(), ' ');
    cout << "*";
    cout << "\n";
}

void print_lines_with_border(const vector<string>& lines)
{
    size_t longest_text = get_longest_text(lines);

    print_border_top_or_bottom_line(longest_text);
    for (auto& line : lines)
    {
        print_line(line, longest_text);
    }
    print_border_top_or_bottom_line(longest_text);
}

int main()
{


    vector<string> lines{"Blah"};
    print_lines_with_border(lines);
}

// Outputs:
//
//   **************************
//   * Blah                   *
//   * Foo foo                *
//   * Third line             *
//   * And so on and so forth *
//   **************************