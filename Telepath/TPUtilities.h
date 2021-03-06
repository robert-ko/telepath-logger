//
//  TPUtilities.h
//  Telepath
//
//  Created by Nick Winter on 8/31/13.
//  Copyright (c) 2013 Nick Winter. All rights reserved.
//

#import <Foundation/Foundation.h>

/// Shorthand: seconds since epoch.
double now(void);

/// Shorthand: serialize object to JSON.
NSString *JSONRepresentation(id object);

/// Shorthand: deserialize dictionary from JSON.
NSDictionary *dictionaryFromJSON(NSData *json);

/// Shorthand: deserialize array to JSON.
NSArray *arrayFromJSON(NSData *json);

/// Could've sworn this was built in somewhere just a second ago.
NSString *base64ForData(NSData *theData);