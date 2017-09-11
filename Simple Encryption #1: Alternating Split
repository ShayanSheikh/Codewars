std::string encrypt(std::string text, int n)
{
  std::string second, first;
  int len = text.length();
  for(int i = 0; i < n; ++i) {
   	first = "";
   	second = "";
	  for(int j = 0; j < len; ++j) {
			if(j%2 == 0)
  	    first += text[j];
  	  else
  			second += text[j];
	  }
	  text = second + first;
  }  
  return text;
}

std::string decrypt(std::string encryptedText, int n)
{
  std::string second, first;
  int len = encryptedText.length();
  for(int i = 0; i < n; ++i) {
    first = encryptedText.substr(0, len/2);
    second = encryptedText.substr(len/2);
    encryptedText = "";
    for(int j = 0; j < len; ++j) {
			if(j%2 == 0)
  	    encryptedText += second[j/2];
  	  else
  			encryptedText += first[j/2];
	  }
  }
  return encryptedText;
}
