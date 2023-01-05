/*IT21097560
  Dissanayake D.S.N.N
  Malabe Campus
  01.02_06 Group*/

#pragma once
class Issues
{
private:
	int issueID;
	char issueType[20];
	char issueDescription[200];
	Agent* agt;

public:
	Issues();
	~Issues();
	Issues(int iID, const char itype[], const char idesc[]);
	void updateIssues();
	void deleteIssues();
	void viewIssues();
	void setIssueID(int isID);
	void setIssueType(char const issuetyp[]);
	void setIssueDescription(char const IssueDesc[]);
};

