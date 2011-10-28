//
//  GitHubController.h
//  QuickHubApp
//
// Will get the github data...
//
//  Created by Christophe Hamerling on 25/10/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Preferences.h"
#import "ASIHTTPRequest.h"

@interface GitHubController : NSObject {
    Preferences *preferences;
}

# pragma mark - GH HTTP processing
- (void) issuesFinished:(ASIHTTPRequest*)request;
- (void) gistFinished:(ASIHTTPRequest*)request;
- (void) organizationsFinished:(ASIHTTPRequest*)request;
- (void) reposFinished:(ASIHTTPRequest*)request;
- (void) pullFinished:(ASIHTTPRequest*)request;

- (void) issuesFailed:(ASIHTTPRequest*)request;
- (void) gistsFailed:(ASIHTTPRequest*)request;
- (void) organizationsFailed:(ASIHTTPRequest*)request;
- (void) reposFailed:(ASIHTTPRequest*)request;
- (void) pullFailed:(ASIHTTPRequest*)request;

- (void) httpFailed:(ASIHTTPRequest*)request;

# pragma mark - Load things from github
- (BOOL) checkCredentials:(id) sender;
- (void)loadGHData:(id)sender;
- (void) loadIssues:(id) sender;
- (void) loadGists:(id) sender;
- (void) loadOrganizations:(id) sender;
- (void) loadRepos:(id) sender;
- (void) loadPulls:(id) sender;

@end