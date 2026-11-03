#include "Email.h"
#include "SMS.h"
#include "WhatsApp.h"

int main()
{
    Email e;
    SMS s;
    WhatsApp w;

    e.send();
    s.send();
    w.send();

    return 0;
}
