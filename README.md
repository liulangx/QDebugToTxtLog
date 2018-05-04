# QDebugToTxtLog
convert QDebug message to txt format log file

using Heaven::useTxtLog() function to change the output stream of QDebug()
using 
  include(QDeToTxtlog.pri)
in .pro file to avoid the problem when you compile your project in release mode - the context.file and context.function will be empty if you do not use:
  DEFINES += QT_MESSAGELOGCONTEXT
the log file will be generated where the excutable document located.
