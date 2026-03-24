import trimesh

models = ["underwear.glb"]
for model in models:
    mesh = trimesh.load(model)

    if isinstance(mesh, trimesh.Scene):
        edges = next(iter(mesh.geometry.values())).edges
        vertices = next(iter(mesh.geometry.values())).vertices
        faces = next(iter(mesh.geometry.values())).faces
    
    else:
        edges = mesh.edges
        vertices = mesh.vertices
        faces = mesh.faces

    edg = []
    for e in edges:
        e = e.tolist()
        edg.append([round(e[0]),round(e[1])])

    ver = []
    for v in vertices:
        v = v.tolist()
        ver.append([round(v[0]*10),round(v[1]*10),round(v[2]*10)])

    print(edg)
    print("")
    print(ver)