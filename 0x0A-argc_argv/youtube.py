from youtubesearchpython import VideosSearch

text = input("text: ")
video = VideosSearch(text,10)
result_list = []
for i in video.result()['result']:
result_dict ={
    'input':text,
    'title':i['title'],  
    'duration':i['duration'], 
    'thumbnails':i['thumbnails'][0]['url'],
    'channel':i['channel']['name'],
    'link':i['link'],
    'views':i['viewCount']['short'],
    'published':i['publishedTime'], 
}
desc =''
if i['descriptionSnippet']:
    for j in i['descriptionSnippet']:
        desc += j['text']
result_dict['description'] = desc
result_list.append(result_dict)

for i in result_list:
	print(i)

