#include "Report.h"
#include <string>

Report::Report()
{
}

Report::Report(int repID, char const repName[])
{
	reportID = repID;
	strcpy(reportName, repName);

}

void Report::generateReports()
{
}

void Report::viewReports()
{
}

void Report::setreportID(int rID)
{
}

void Report::setreportName(char const rName[])
{
}

Report::~Report()
{
}
