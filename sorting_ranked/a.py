import json

# 元のJSONファイルのパス
input_file = 'rank.json'
# ソート後のJSONファイルのパス
output_file = 'sorted.json'

# 元のJSONファイルを読み込む
with open(input_file, 'r') as f:
    data = json.load(f)

# 'level' でソート（降順）
sorted_data = sorted(data, key=lambda x: x.get('level', 0), reverse=True)

# ソート後にrankを追加
for rank, item in enumerate(sorted_data, start=1):
    item['rank'] = rank

# 新しいJSONファイルに書き込む
with open(output_file, 'w') as f:
    json.dump(sorted_data, f, indent=4)

print(f'ランク付けされたデータは {output_file} に保存されました。')
