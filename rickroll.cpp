// Never gonna give you up, never gonna let you down.
// rickroll.cpp developed by TheSystemGuy and augmented with cross-platform
// compilation by dreamscached.

#include <string>

#define RICK_URL "https://youtu.be/dQw4w9WgXcQ"

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
	#include <windows.h>
	#include <shellapi.h>

	void openURL(const std::string &url) {
		ShellExecute(0, 0, url.c_str(), 0, 0, SW_SHOW);
	}

#elif __APPLE__
	#include <CoreFoundation/CFBundle.h>
	#include <ApplicationServices/ApplicationServices.h>

	void openURL(const std::string &url) {
		CFURLRef ref = CFURLCreateWithBytes(
			NULL,
			(UInt8*) url_str.c_str(),
			url_str.length(),
			kCFStringEncodingASCII,
			NULL
		);
		LSOpenCFURLRef(ref, 0);
		CFRelease(ref);
	}

#elif __linux__
	#include <stdio.h>
	#include <stdlib.h>

	void openURL(const std::string &url) {
		system(("xdg-open " + url).c_str());
	}

#else
	#error "Unsupported compiler, supported platforms are Windows, MacOS and Linux."

#endif

int main() { openURL(RICK_URL); }