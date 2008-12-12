#include "mainwindow.h"
#include <kapplication.h>
#include <kaboutdata.h>
#include <kcmdlineargs.h>
#include <KDE/KLocale>

static const char description[] =
    I18N_NOOP("A Twitter client app");

static const char version[] = "0.1";

int main(int argc, char **argv)
{
    KAboutData about("kwitter", 0, ki18n("Kwitter"), version, ki18n(description),
                     KAboutData::License_GPL_V3, ki18n("(C) 2007 Mehrdad Momeny"), KLocalizedString(), 0, "mehrdad.momeny@gmail.com");
    about.addAuthor( ki18n("Mehrdad Momeny"), KLocalizedString(), "mehrdad.momeny@gmail.com" );
    KCmdLineArgs::init(argc, argv, &about);

//     KCmdLineOptions options;
//     options.add("+[URL]", ki18n( "Document to open" ));
//     KCmdLineArgs::addCmdLineOptions(options);
    KApplication app;

	MainWindow *widget = new MainWindow;
    widget->show();


    return app.exec();
}