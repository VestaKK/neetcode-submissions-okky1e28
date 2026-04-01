class Solution {
public:

    string encode(vector<string>& strs) {
        std::string encoded = "";
        for (const string& s : strs) {
            encoded += s;
            encoded += "\n";
        }

        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded = {};
        string sb = "";

        for (char& c : s) {
            if (c == '\n') {
               decoded.push_back(sb);
               sb.clear();
            } else {
                sb += c;
            }
        }
        return decoded;
    }
};
