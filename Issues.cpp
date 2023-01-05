/*IT21097560
  Dissanayake D.S.N.N
  Malabe Campus
  01.02_06 Group*/

#include "Issues.h"
#include <string>

Issues::Issues()
{
}

Issues::~Issues()
{
}

Issues::Issues(int iID, const char itype[], const char idesc[])
{
	issueID = iID;
	strcpy(issueType, itype);
	strcpy(issueDescription, idesc);

}

void Issues::updateIssues()
{
}

void Issues::deleteIssues()
{
}

void Issues::viewIssues()
{
}

void Issues::setIssueID(int isID)
{
}

void Issues::setIssueType(char const issuetyp[])
{
}

void Issues::setIssueDescription(char const IssueDesc[])
{
}
