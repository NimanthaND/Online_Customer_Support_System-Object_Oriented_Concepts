#pragma once
class Report
{
private:
    int reportID;
    char reportName[30];

public:
    Report();
    Report(int repID, char const repName[]);
    void generateReports();
    void viewReports();
    void setreportID(int rID);
    void setreportName(char const rName[]);
    ~Report();

};

