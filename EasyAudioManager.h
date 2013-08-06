//
//  EasyAudioManager.h
//  iScrapbook
//
//  Created by Matthew Davidson on 13-06-22.
//  Licensed under MIT License.
//  EasyAudio.h, EasyAudioManager.h, EasyAudio.m, EasyAudioManager.m - licensed under MIT License
//

/*
Copyright (c) 2013 Matthew Davidson
Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/


#import "EasyAudio.h"

@interface EasyAudioManager : NSObject <AVAudioPlayerDelegate>
@property (atomic,strong) NSMutableDictionary * soundList;
@property (nonatomic,strong) NSMutableArray * nowPlaying;
@property (nonatomic,strong) NSTimer * repeater;
@property (nonatomic,strong) EasyAudio * player;
- (void) control: (NSString *) key method:(NSString *) method;
- (void) control: (NSString *) key method:(NSString *) method speed:(NSString *) speed;
-(void) intervalControl:(NSString *)
    key method:(NSString *) method speed: (int) speed repeat:(BOOL) repeat;
-(void) playSound:(NSTimer *) timer;
-(void) fadeLoop:(NSString *) key speed: (float) speed initVolume:(float) volume;
-(void) playSound:(NSTimer *) timer;
@end
