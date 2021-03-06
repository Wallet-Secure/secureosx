# SecureOSX

SecureOSX is a user-friendly Bitcoin wallet app for OSX.

![](http://i.imgur.com/p5VoeND.png)


## Requirements

* OSX 10.7 (Lion) or newer
* Java runtime (for now - required by bitcoinj lib)


## Building

First, clone the GitHub repository:

    git clone git@github.com:SecureOSXwallet/SecureOSX-osx.git

Make sure you have CocoaPods installed:

    gem install cocoapods

Install the required pods:

    pod install

Now, import some SecureOSX libraries which are kept in separate repositories as submodules:

    git submodule update --init --recursive

Before you build the project, you also need to install some additional libraries using homebrew:

    brew install libevent openssl maven
    brew link openssl --force

Then you can open the project workspace in Xcode (`SecureOSX.xcworkspace`, not `SecureOSX.xcodeproj`), hit the Run button and wait for it to build. Enjoy!


## Test vs. production network

SecureOSX is currently set up to use the main blockchain. If you prefer to use the testing network to avoid risking real Bitcoin while testing the app, change the line `#define TESTING_NETWORK 0` in `SecureOSX-Prefix.pch` to `1` and rebuild the app or launch it with the `SecureOSX (Test Network)` scheme in Xcode.


## Contributing

Patches and pull requests are very welcome. If you want to send us any code, read the [Coding guidelines](https://github.com/grabSecureOSX/SecureOSX-osx/wiki/Code-style-guidelines) first.
