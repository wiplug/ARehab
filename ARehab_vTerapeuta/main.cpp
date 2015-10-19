#include "ARehab_vTerapeuta.h"

#include <QtWidgets/QApplication>
#include <QTextCodec>
#include <QList>
#include <QByteArray>
#include <QString>
#include <QDir>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

	Q_INIT_RESOURCE(ARehab_vTerapeuta);

	QSurfaceFormat format;
	format.setVersion(4, 3);	
	format.setProfile(QSurfaceFormat::CoreProfile);
	format.setOption(QSurfaceFormat::DebugContext);
	format.setRenderableType(QSurfaceFormat::OpenGL);
	format.setDepthBufferSize(24);
	format.setStencilBufferSize(8);	
	format.setSamples(4);
	format.setSwapInterval(0); //Disable VSync
	QSurfaceFormat::setDefaultFormat(format);

	ARehabGUIDesigner::ARehabMainWindow w;	
	
	QFile styleFile(":/styles/main.qss");
	styleFile.open(QFile::ReadOnly);	
	app.setStyleSheet(QLatin1String(styleFile.readAll()));
	styleFile.close();

	w.show();
	return (app.exec());
}
