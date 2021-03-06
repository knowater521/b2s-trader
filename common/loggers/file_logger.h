/*
 * Copyright (c) 2020, Rapprise.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef AUTO_TRADER_COMMON_FILE_LOGGER_H
#define AUTO_TRADER_COMMON_FILE_LOGGER_H

#include <QDebug>
#include <QtWidgets/QApplication>
#include <fstream>

#include "common/crossplatform_functions.h"
#include "logger.h"

namespace auto_trader {
namespace common {
namespace loggers {

class FileLogger : public Logger {
 public:
  static Logger &getLogger() {
    static FileLogger logger;
    return logger;
  }

  Logger &operator<<(const std::string &message) override {
    std::string dirPath;
    if (QCoreApplication::instance()) {
      auto applicationDir = QApplication::applicationDirPath();
      dirPath = applicationDir.toStdString() + std::string("/") + "logging";
    } else {
      dirPath = "logging";
    }

    const std::string filepath = dirPath + std::string("/") + "b2s_info.log";

    file_.open(filepath, std::fstream::in | std::fstream::out | std::ios_base::app);

    if (!file_) {
#ifdef WIN32
      if (!common::isDirectoryExists(dirPath)) {
        _mkdir(dirPath.c_str());
      }
#else
      if (!common::isDirectoryExists(dirPath)) {
        mkdir(dirPath.c_str(), S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
      }
#endif
      file_.open(filepath, std::fstream::in | std::fstream::out | std::fstream::trunc);
    }

    if (!file_) {
      qDebug() << "File cannot be opened.";
      return *this;
    }

    file_ << message << "\n";
    file_.close();

    return *this;
  }

  FileLogger(const FileLogger &) = delete;
  const FileLogger &operator=(const FileLogger) = delete;

 private:
  FileLogger() = default;
  ~FileLogger() = default;

 private:
  std::fstream file_;
};

class TradingFileLogger : public Logger {
 public:
  static Logger &getLogger() {
    static TradingFileLogger logger;
    return logger;
  }

  Logger &operator<<(const std::string &message) override {
    std::string dirPath;
    if (QCoreApplication::instance()) {
      auto applicationDir = QApplication::applicationDirPath();
      dirPath = applicationDir.toStdString() + std::string("/") + "logging";
    } else {
      dirPath = "logging";
    }
    const std::string filepath = dirPath + std::string("/") + "b2s_trading.log";

    file_.open(filepath, std::fstream::in | std::fstream::out | std::ios_base::app);

    if (!file_) {
#ifdef WIN32
      if (!::auto_trader::common::isDirectoryExists(dirPath)) {
        _mkdir(dirPath.c_str());
      }
#else
      if (!common::isDirectoryExists(dirPath)) {
        mkdir(dirPath.c_str(), S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
      }
#endif
      file_.open(filepath, std::fstream::in | std::fstream::out | std::fstream::trunc);
    }

    if (!file_) {
      qDebug() << "File cannot be opened.";
      return *this;
    }

    file_ << message << "\n";
    file_.close();

    return *this;
  }

  TradingFileLogger(const TradingFileLogger &) = delete;
  const TradingFileLogger &operator=(const TradingFileLogger) = delete;

 private:
  TradingFileLogger() = default;
  ~TradingFileLogger() = default;

 private:
  std::fstream file_;
};

}  // namespace loggers
}  // namespace common
}  // namespace auto_trader

#endif  // AUTO_TRADER_COMMON_FILE_LOGGER_H
