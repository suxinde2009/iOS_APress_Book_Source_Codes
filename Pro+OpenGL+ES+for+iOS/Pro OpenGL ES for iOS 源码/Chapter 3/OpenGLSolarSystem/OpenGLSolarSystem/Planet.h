/****************************************************************************************
 * Planet.h : lifted from the iPhone Touchfighter exmaple code. Thanks! Apple!			*
 ****************************************************************************************/
#import <Foundation/Foundation.h>
#import <OpenGLES/ES1/gl.h>


@interface Planet : NSObject 
{
	
@private
	GLfloat			*m_VertexData;
	GLubyte			*m_ColorData;
	
	GLint			m_Stacks, m_Slices;
	GLfloat			m_Scale;						
	GLfloat			m_Squash;
}
- (bool)execute;
- (id) init:(GLint)stacks slices:(GLint)slices radius:(GLfloat)radius squash:(GLfloat) squash;

@end
