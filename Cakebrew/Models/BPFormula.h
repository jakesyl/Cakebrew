//
//	BPFormula.h
//	Cakebrew – The Homebrew GUI App for OS X 
//
//	Created by Bruno Philipe on 4/3/14.
//	Copyright (c) 2014 Bruno Philipe. All rights reserved.
//
//	This program is free software: you can redistribute it and/or modify
//	it under the terms of the GNU General Public License as published by
//	the Free Software Foundation, either version 3 of the License, or
//	(at your option) any later version.
//
//	This program is distributed in the hope that it will be useful,
//	but WITHOUT ANY WARRANTY; without even the implied warranty of
//	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//	GNU General Public License for more details.
//
//	You should have received a copy of the GNU General Public License
//	along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#import <Foundation/Foundation.h>

@interface BPFormula : NSObject <NSCoding>

@property (strong, readonly) NSString *name;
@property (strong, readonly) NSString *version;
@property (strong, readonly) NSString *latestVersion;
@property (strong, readonly) NSString *installPath;
@property (strong, readonly) NSString *dependencies;
@property (strong, readonly) NSString *conflicts;
@property (strong, readonly) NSURL    *website;
@property (strong, readonly) NSArray  *options;

@property (getter = isInstalled, readonly)	BOOL installed;
@property (getter = isDeprecated, readonly)	BOOL deprecated;

+ (BPFormula*)formulaWithName:(NSString*)name version:(NSString*)version andLatestVersion:(NSString*)latestVersion;
+ (BPFormula*)formulaWithName:(NSString*)name andVersion:(NSString*)version;
+ (BPFormula*)formulaWithName:(NSString*)name;

- (BOOL)getInformation;

- (BOOL)isOutdated;

@end
