//transfer binary string
string transfer(string input1){
    string output1;
    int len = input1.length();
    for (int i = 0; i < len; i+=2){
        string subI = input1.substr(i,2);
        if (subI == "00") output1.append("0");
        else if (subI == "01") output1.append("1");
        else if (subI == "10") output1.append("2");
        else if (subI == "11") output1.append("3");
    }
    return output1;
}
