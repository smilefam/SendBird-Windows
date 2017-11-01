//
//  SBDUserMessage.h
//  SendBird
//
//  Created by Jed Gyeong on 6/28/17.
//  Copyright © 2017 SendBird. All rights reserved.
//

#ifndef SENDBIRD_SBDUSERMESSAGE_H_
#define SENDBIRD_SBDUSERMESSAGE_H_

#include <iostream>
#include <map>
#include <vector>

#include "SBDBaseMessage.h"
#include "SBDBaseChannel.h"

class SBDCommand;
class SBDBaseChannel;

using namespace std;

/**
 *  The `SBDUserMessage` class represents the user <span>message</span> which is generated by a user via [`SendUserMessage`]() in `SBDBaseChannel` or [Platform API](https://docs.sendbird.com/platform#messages_3_send).
 */
class SBDUserMessage : public SBDBaseMessage {
public:
	/**
	*  The message sender.
	*/
	SBDUser sender;

    /**
     *  <span>Message</span> text.
     */
    wstring message;
    
    /**
     *  Data of <span>message</span>.
     */
    wstring data;
    
    /**
     *  Request ID for checking ACK.
     */
    wstring request_id;
    
    /**
     *  Custom message type.
     */
    wstring custom_type;
    
    /**
     *  Translated <span>message</span> text.
     */
    map<wstring, wstring> translations;
    
    /**
     *  Returns sender of the <span>message</span>.
     */
    SBDUser GetSender();
    
    /**
     *  Internal use only.
     */
    void SetSender(SBDUser sender);

	/**
	 *  Internal use only.
	 */
	SBDUserMessage(string dict);

	/**
	 *  Internal use only.
	 */
	~SBDUserMessage() {};

	/**
	*  Internal use only.
	*/
	void Overwrite(SBDUserMessage *message);
};

#endif /* SENDBIRD_SBDUSERMESSAGE_H_ */
