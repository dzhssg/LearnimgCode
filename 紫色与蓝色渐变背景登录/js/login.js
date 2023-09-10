//执行登录
function login() 
{
	var email = document.getElementById("email").value.trim();
	var pwd = document.getElementById("password").value.trim();
	var ema =/^[a-zA-Z0-9_-]+@[a-zA-Z0-9_-]+(\.[a-zA-Z0-9_-]+)+$/;
	//提示元素对象
	var tip = document.getElementById("tip");
	if(email.length<=0)
	{
		tip.innerText='请输入邮箱'
		return;
	}
	if(!ema.test(email))
	{
		tip.innerText='邮箱格式不对'
		return;
	}	
	if (pwd.length <= 0) {
		tip.innerText='请输入密码'
		return;
	}
	if (email == "626397018@qq.com" && pwd == "123456") {
		window.location = 'index.html'
	} else {
		tip.innerText='账号或密码不正确，请重新输入！'
	}
}
function creatRandom()
			{
				random=parseInt(Math.random()*1000000)
				alert(random)
			} 
function forgetpassword()
			{
				var email=document.getElementById("email").value.trim();
				var phone=document.getElementById("phone").value.trim();
				var validateCode=document.getElementById("validateCode").value.trim();
				var pwd=document.getElementById("password").value.trim();
				var confirmPassword=document.getElementById("confirmPassword").value.trim();
				var tip = document.getElementById("tip");
				var ema =/^[a-zA-Z0-9_-]+@[a-zA-Z0-9_-]+(\.[a-zA-Z0-9_-]+)+$/;
				if(email.length<=0)
				{
					tip.innerText='请输入邮箱'
					return;
				}
				if(!ema.test(email))
				{
					tip.innerText='邮箱格式不对'
					return;
				}	
				if(validateCode.length<=0)
				{
					tip.innerText='请输入验证码'
					return;
				}	
				if(validateCode != random)
				{
					tip.innerText='验证码不正确，请重新输入'
					return;
				}
			
				var reg =/^1[3456789]\d{9}$/;
				
				if(!reg.test(phone))
				{
					tip.innerText='手机号码格式不对'
					return;
				}
				
				if(pwd.length<=0)
				{
					tip.innerText='请输入密码'
					return;
				}
				if(pwd.length<6 || pwd.lengh>20)
				{
					tip.innerText='密码应该在6~20位'
					return;
				}
				if(confirmPassword<=0)
				{
					tip.innerText='请输入确认密码'
					return;
				}
				if(confirmPassword.length<6 || confirmPassword.lengh>20)
				{
					tip.innerText='密码应该在6~20位'
					pwd.focus;
					return;
				}
				
				if(pwd!=confirmPassword)
				{
					tip.innerText='两次输入的密码不一致,请重新输入'
				}
				else
				{
					tip.innerText='重置密码成功!'
				}
			}
			
	
	
function register()
		{
			var email=document.getElementById("email").value.trim();
			var phone=document.getElementById("phone").value.trim();
			var pwd=document.getElementById("password").value.trim();
			var confirmPassword=document.getElementById("confirmPassword").value.trim();
			var tip = document.getElementById("tip");
			var ema =/^[a-zA-Z0-9_-]+@[a-zA-Z0-9_-]+(\.[a-zA-Z0-9_-]+)+$/;
			if(email.length<=0)
			{
				tip.innerText='请输入邮箱'
				return;
			}
			if(!ema.test(email))
			{
				tip.innerText='邮箱格式不对'
				return;
			}	
			
			var reg =/^1[3456789]\d{9}$/;
			
			if(!reg.test(phone))
			{
				tip.innerText='手机号码格式不对'
				return;
			}
				
			if(pwd.length<=0)
			{
				tip.innerText='请输入密码'
				return;
			}
			if(pwd.length<6 || pwd.lengh>20)
			{
				tip.innerText='密码应该在6~20位'
				return;
			}
			if(confirmPassword<=0)
			{
				tip.innerText='请输入确认密码'
				return;
			}
			if(confirmPassword.length<6 || confirmPassword.lengh>20)
			{					
				tip.innerText='密码应该在6~20位'
				pwd.focus;
				return;
			}				
			if(pwd!=confirmPassword)
			{
				tip.innerText='两次输入的密码不一致,请重新输入'
			}
			else
			{
				tip.innerText='注册成功!'
			}
		}