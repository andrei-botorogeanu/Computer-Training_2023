def make_center(fn):
	def decorator_center():
		return "<center>" + fn() + "</center>"
	return decorator_center

def make_bold(fn):
	def decorator_bold():
		return "<b>" + fn() + "</b>"
	return decorator_bold

def make_div(fn):
	def decorator_div():
		return "<div style='color:green; font-size: 30px'>" + fn() + "</div><img src='poza.jpg' height='200' width=250 > "
	return decorator_div

def html(fn):
	def decorator_icon():
		return "<html><link rel = 'icon' href = 'logo.ico' type = 'image/x-icon'>" + fn() + "</html>"
	return decorator_icon 
	
'''
def make_body(fn):
	def decorator_body():
		return "<body>" + fn() + "</body>"
	return decorator_body 
'''
@html
@make_div
#@make_body
@make_bold
@make_center
def main():
	return "This site has created by Andrei B."
f = open("Andrei.html","w")
f.write(main())